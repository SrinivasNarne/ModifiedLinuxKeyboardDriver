#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xebc6b96d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbde6bc6c, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xd3a3d885, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x590e545d, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x1f84c752, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x49c0cb8a, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x30e77d8e, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x977f0b2, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4e0f8358, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xe69abcae, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc1d601bc, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc90d1b8, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf812cff6, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0xe637ecdc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf0b88e2c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x13ef3ae9, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa9bf280, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa7c2e8e2, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x54fe0140, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x871c8f6b, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x61b45435, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3357e3ab, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x504612f7, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic03isc01ip01in*");

MODULE_INFO(srcversion, "1AF010FB79C7B2CD9EF72AD");
