#define MODULE
#include <linux/module.h>

int init_module(void) {printk("<1>Hellow, world\n"; return 0; }
void cleanup_module(void) { printk("<1>Goodbye cruel world\n"); }
