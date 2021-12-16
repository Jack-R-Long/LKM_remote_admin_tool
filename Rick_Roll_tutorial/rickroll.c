#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int ___init rickroll_init(void) {
    printk(KERN_INFO "Rickroll mod has been loaded\n");
    return 0;
}

static void __exit rickroll_exit(void) {
    printk(KERN_INFO "Rickroll mod has been unloaded\n"); 
}

module_init(rickroll_init);
module_exit(rickroll_exit);