#include <linux/types.h>

int __kernel_gettimeofday(void *tv, void *tz) {
    return -1;
}

int __kernel_clock_gettime(int clock, void *ts) {
    return -1;
}

int __kernel_clock_getres(int clock, void *ts) {
    return -1;
}

int __kernel_time(void *t) {
    return -1;
}
