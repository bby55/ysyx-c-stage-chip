#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

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

    int j = 0; // 跟踪out的写入位置
    char int_buf[20]; // 存储整数转换结果
    char *p; // 用于处理%s的字符串指针（无需初始化为out，避免误解）

    // 用fmt[i] != '\0'替代strlen(fmt)，提升效率
    for (size_t i = 0; fmt[i] != '\0'; i++) {
        if (fmt[i] == '%') {
            i++; // 跳过'%'，统一处理后续格式符
            switch (fmt[i]) {
                case 'd': {
                    // 处理整数：转换为字符串并写入out
                    int len = int_to_str(va_arg(args, int), int_buf);
                    for (int k = 0; k < len; k++) {
                        out[j++] = int_buf[k];
                    }
                    break;
                }
                case 's': {
                    // 处理字符串：安全复制（避免strlen的NULL风险）
                    p = va_arg(args, char*);
                    if (p != NULL) { // 额外判断NULL，增强健壮性
                        for (int k = 0; p[k] != '\0'; k++) {
                            out[j++] = p[k];
                        }
                    }
                    break;
                }
                default: {
                    // 未知格式符：原样输出'%'和当前字符（符合标准）
                    out[j++] = '%';   // 补全丢失的'%'
                    out[j++] = fmt[i];
                    break;
                }
            }
        } else {
            // 普通字符：直接写入out
            out[j++] = fmt[i];
        }
    }

    out[j] = '\0'; // 添加字符串终止符
    va_end(args);
    return j; // 返回写入的字符数（不含'\0'）
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
