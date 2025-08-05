#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

#define PRINTF_BUF_SIZE 1024  // 临时缓冲区大小（根据需求调整）
char buf[1024];
void putch(char ch);

int printf(const char *fmt, ...) {
    va_list ap;
    va_start(ap, fmt);
    
    int val = vsnprintf(buf, 1024, fmt, ap);
    char *tmp = buf;
    while (*tmp != 0) {
        putch(*tmp);
        tmp++;
    }

    va_end(ap);
    return val;
}
/*
// 辅助函数：将整数转换为字符串（以10进制为例）
static int itoa(int num, char *buf) {
    char *start = buf;
    unsigned int n;  // 声明无符号变量n，用于统一处理正负整数

    if (num < 0) {  // 处理负数
        *buf++ = '-';
        n = (unsigned int)(-num);  // 负数转为无符号正数（避免INT_MIN溢出）
    } else {
        n = (unsigned int)num;  // 正数直接转为无符号
    }

    // 处理0的特殊情况
    if (n == 0) {  // 这里改用n判断（因为num可能已被修改）
        *buf++ = '0';
    } else {
        // 逆序写入数字（后续需反转）
        char temp[16];
        int i = 0;
        while (n > 0) {  // 用n遍历（代替原来的num）
            temp[i++] = '0' + (n % 10);
            n /= 10;
        }
        // 反转恢复正确顺序
        while (i > 0) {
            *buf++ = temp[--i];
        }
    }
    return buf - start;  // 返回写入的字符数
}
*/
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap, fmt);
  
  int val = vsnprintf(out, 1024, fmt, ap);
  va_end(ap);

  return val;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
    char *start = out;
    while (n-- && *fmt != '\0') {
        if (*fmt == '%') {
            fmt++;
            if (*fmt == 's') {
                char *tmp_s = va_arg(ap, char*);
                while (*tmp_s != '\0') {
                    *out++ = *tmp_s++;
                }
            }
            else if (*fmt == 'd') {
                int tmp_int = va_arg(ap, int);
                if (tmp_int < 0) {
                    *out++ = '-';
                    tmp_int = -1 * tmp_int;
                }
                int number = tmp_int;
                int len  = 0;
                do {
                    number /= 10;
                    len++;
                } while (number);
                out = out + len - 1;
                int tmp_len = len;
                while (tmp_len--) {
                    int tmp = tmp_int % 10;
                    *out-- = tmp + 48;
                    tmp_int /= 10;
                }
                out += (len+1);
            }
            else if (*fmt == '%') {
                *out++ = '%';
            }
            else if (*fmt == 'c') {
                char tmp_char = va_arg(ap, int);
                *out++ = tmp_char;
            }
            else {
                return -1;
            }
        }
        else {
            *out++ = *fmt;
        }
        fmt++;
    }
    *out = '\0';
    return out - start;
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
}
*/
int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}
/*
int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}
*/
#endif
