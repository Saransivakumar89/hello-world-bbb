#include<linux/module.h>
#include<linux/init.h>
#include<linux/kernel.h>

/* 
 * Module Initialization function 
 * Runs the function when the module is loaded using insmod
 * __init : tells the kernel, use when the initialization
 */

static int __init hello_init(void){
    
    printk(KERN_INFO "Hello-world-BBB\n");
    return 0;
}

/* 
 * Module Cleanup Function
 * Runs when the module is removed using rmmod
 * __exit: marks this function as cleanup code
 */


static void __exit hello_exit(void){
    printk(KERN_INFO "Good-bye-BBB\n");
}

/* Module Meta-data */

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello World Module");
MODULE_AUTHOR("Saran Sivakumar");
MODULE_VERSION("1.0");

/* Register the Initialization function */
module_init(hello_init);

/* Register the cleanup function */
module_exit(hello_exit);
