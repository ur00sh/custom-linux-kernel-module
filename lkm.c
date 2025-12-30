//unos modula
#include <linux/module.h>

//ulazna funkcija
static int __init outtree_init(void) {
	printk("Dobrodosli u OTF modul\n");
	return 0;
}

//izlazna funkcija
static void __exit outtree_cleanup(void) {
	printk("Izlaz iz OTF modula\n");
}

//pozivanje funkcija
module_init(outtree_init);
module_exit(outtree_cleanup);

//informacije o modulu
MODULE_LICENSE("GPL");
MODULE_AUTHOR("UROS PETROVIC");
MODULE_DESCRIPTION("OUT OF TREE kernel module");
MODULE_VERSION("6");
