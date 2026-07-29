#include <linux/module.h>
unsigned long __stack_chk_guard = 0xdeadbeef;
EXPORT_SYMBOL(__stack_chk_guard);
void __stack_chk_fail(void) {
    panic("Stack smashing detected!");
}
EXPORT_SYMBOL(__stack_chk_fail);
