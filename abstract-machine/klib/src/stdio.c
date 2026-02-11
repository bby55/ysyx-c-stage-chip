#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define PRINTF_BUF_SIZE 1024 // 临时缓冲区大小（根据需求调整）

int printf(const char *fmt, ...)
{
    char buf[PRINTF_BUF_SIZE]; // 临时缓冲区
    va_list ap;

    va_start(ap, fmt);
    // 先通过vsprintf将格式化结果写入buf
    int len = vsprintf(buf, fmt, ap);
    va_end(ap);

    // 遍历buf，用putch逐个输出字符（直到终止符'\0'）
    for (int i = 0; i < len; i++)
    {
        putch(buf[i]); // 调用底层字符输出函数
    }

    return len; // 返回输出的字符数
}

// 辅助函数：将整数转换为字符串（以10进制为例）
static int itoa(int num, char *buf)
{
    char *start = buf;
    unsigned int n; // 声明无符号变量n，用于统一处理正负整数

    if (num < 0)
    { // 处理负数
        *buf++ = '-';
        n = (unsigned int)(-num); // 负数转为无符号正数（避免INT_MIN溢出）
    }
    else
    {
        n = (unsigned int)num; // 正数直接转为无符号
    }

    // 处理0的特殊情况
    if (n == 0)
    { // 这里改用n判断（因为num可能已被修改）
        *buf++ = '0';
    }
    else
    {
        // 逆序写入数字（后续需反转）
        char temp[16];
        int i = 0;
        while (n > 0)
        { // 用n遍历（代替原来的num）
            temp[i++] = '0' + (n % 10);
            n /= 10;
        }
        // 反转恢复正确顺序
        while (i > 0)
        {
            *buf++ = temp[--i];
        }
    }
    return buf - start; // 返回写入的字符数
}

// 核心：格式化字符串，支持 %d、%s、%%
int vsprintf(char *out, const char *fmt, va_list ap)
{
    char *start = out; // 记录缓冲区起始位置（用于计算长度）

    for (; *fmt != '\0'; fmt++)
    {
        if (*fmt != '%')
        {
            // 普通字符直接写入缓冲区
            *out++ = *fmt;
            continue;
        }
        // 处理格式化占位符
        switch (*(++fmt))
        {
        case '%': // 输出 '%' 本身
            *out++ = '%';
            break;
        case 'd':                              // 处理整数
            out += itoa(va_arg(ap, int), out); // 调用itoa转换
            break;
        case 's':
        {
            char *s = va_arg(ap, char *);

            // 正常处理（同时添加NULL检查）
            if (s == NULL)
            {
                const char *null_str = "(null)";
                while (*null_str)
                    *out++ = *null_str++;
            }
            else
            {
                while (*s)
                    *out++ = *s++;
            }
            break;
        }
        // 可扩展其他格式符（如%x、%c等）
        default:
            *out++ = *fmt; // 未知格式符直接输出
            break;
        }
    }
    *out = '\0';        // 结尾添加字符串终止符
    return out - start; // 返回格式化后的字符数（不含终止符）
}
int sprintf(char *out, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);                // 初始化可变参数列表
    int len = vsprintf(out, fmt, ap); // 复用vsprintf的格式化逻辑
    va_end(ap);                       // 清理可变参数
    return len;                       // 返回格式化后的长度
}
/*
static int int_to_str(int num, char *buf) {
    int len = 0;
    int is_neg = 0;
    unsigned int n;

    if (num == 0) {
        buf[len++] = '0';
        buf[len] = '\0';
        return len;
    }

    if (num < 0) {
        is_neg = 1;
        n = (unsigned int)(-num);
    } else {
        n = (unsigned int)num;
    }

    while (n > 0) {
        buf[len++] = '0' + (n % 10);
        n /= 10;
    }

    if (is_neg) {
        buf[len++] = '-';
    }

    for (int i = 0; i < len / 2; i++) {
        char tmp = buf[i];
        buf[i] = buf[len - 1 - i];
        buf[len - 1 - i] = tmp;
    }

    buf[len] = '\0';
    return len;
}

int sprintf(char *out, const char *fmt, ...) {
    va_list args;
    va_start(args, fmt);

    int j = 0;
    char int_buf[20];
    char *p;

    for (size_t i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++;
            switch (fmt[i]) {
                case 'd': {
                    int len = int_to_str(va_arg(args, int), int_buf);
                    for (int k = 0; k < len; k++) {
                        out[j++] = int_buf[k];
                    }
                    break;
                }
                case 's': {
                    p = va_arg(args, char*);
                    if (p != NULL) {
                        for (int k = 0; p[k] != '\0'; k++) {
                            out[j++] = p[k];
                        }
                    }
                    break;
                }
                default: {
                    out[j++] = '%';
                    out[j++] = fmt[i];
                    break;
                }
            }
        } else {
            out[j++] = fmt[i];
        }
    }

    out[j] = '\0';
    va_end(args);
    return j;
}*/

int snprintf(char *out, size_t n, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);                    // 初始化可变参数列表
    int len = vsnprintf(out, n, fmt, ap); // 调用 vsnprintf 处理格式化
    va_end(ap);
    return len;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap)
{
    char *start = out;
    while (n-- && *fmt != '\0')
    {
        if (*fmt == '%')
        {
            fmt++;
            if (*fmt == 's')
            {
                char *tmp_s = va_arg(ap, char *);
                while (*tmp_s != '\0')
                {
                    *out++ = *tmp_s++;
                }
            }
            else if (*fmt == 'd')
            {
                int tmp_int = va_arg(ap, int);
                if (tmp_int < 0)
                {
                    *out++ = '-';
                    tmp_int = -1 * tmp_int;
                }
                int number = tmp_int;
                int len = 0;
                do
                {
                    number /= 10;
                    len++;
                } while (number);
                out = out + len - 1;
                int tmp_len = len;
                while (tmp_len--)
                {
                    int tmp = tmp_int % 10;
                    *out-- = tmp + 48;
                    tmp_int /= 10;
                }
                out += (len + 1);
            }
            else if (*fmt == '%')
            {
                *out++ = '%';
            }
            else if (*fmt == 'c')
            {
                char tmp_char = va_arg(ap, int);
                *out++ = tmp_char;
            }
            else
            {
                return -1;
            }
        }
        else
        {
            *out++ = *fmt;
        }
        fmt++;
    }
    *out = '\0';
    return out - start;
}
#endif
