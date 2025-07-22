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
    int j = 0;
    int len = 0;
    char int_buf[20];
    char *p = out;
    for(size_t i = 0; fmt[i] != '\0'; i++){
        if(fmt[i] == '%'){
            switch(fmt[i+1]){
                case 'd':
                    len = int_to_str(va_arg(args, int), int_buf);
                    for(int k = 0; k < len; k++){
                        out[j] = int_buf[k];
                        j++;
                    }
                    i++;
                    break;

                case 's':
                    p = va_arg(args, char*);
                    for(int k = 0; k < strlen(p); k++){
                        out[j] = p[k];
                        j++;
                    }
                    i++;
                    break;
                default:
                    out[j] = fmt[i+1];
                    j++;
                    i++;
                    break;
            }
    }
    }
    out[j] = '\0';
    va_end(args);
    return j;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
