#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x205734de, "struct_module" },
	{ 0x9b718427, "_write_unlock_irqrestore" },
	{ 0x3facc737, "device_remove_file" },
	{ 0x3a115147, "per_cpu__current_task" },
	{ 0xf6677ef0, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x69f33a1a, "agp_backend_release" },
	{ 0x60253ab0, "up_read" },
	{ 0x9ab19bf7, "mem_map" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa5423cc4, "param_get_int" },
	{ 0x98b1f5e8, "del_timer" },
	{ 0xd0d8621b, "strlen" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x508ef3dd, "remove_wait_queue" },
	{ 0xc64796bc, "boot_cpu_data" },
	{ 0xe72ec5c0, "pci_disable_device" },
	{ 0xc0fa04aa, "_write_lock_irqsave" },
	{ 0xc6b64892, "i2c_transfer" },
	{ 0xd36f7bb0, "__tasklet_hi_schedule" },
	{ 0x56179c5f, "mtrr_add" },
	{ 0xc1e92f47, "set_page_dirty_lock" },
	{ 0xc8be7b15, "_spin_lock" },
	{ 0xd47f04e3, "agp_copy_info" },
	{ 0x1573ceb2, "remove_proc_entry" },
	{ 0xa03d6a57, "__get_user_4" },
	{ 0x857cd203, "pci_dev_get" },
	{ 0xcb83f112, "acpi_evaluate_object" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x66e58efc, "pci_release_regions" },
	{ 0xa2268b59, "mutex_unlock" },
	{ 0x2fd1d81c, "vfree" },
	{ 0xa2487e0, "unblock_all_signals" },
	{ 0xcb32da10, "param_set_int" },
	{ 0x6e185827, "_spin_lock_irqsave" },
	{ 0xd553ff71, "change_page_attr" },
	{ 0xd24c386d, "idr_for_each" },
	{ 0x1d26aa98, "sprintf" },
	{ 0xb3a307c6, "si_meminfo" },
	{ 0x29747b96, "pci_dev_driver" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf0c7cc95, "down_read" },
	{ 0xda4008e6, "cond_resched" },
	{ 0x518eb764, "per_cpu__cpu_number" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x89fca3f2, "agp_unbind_memory" },
	{ 0xbcf71356, "pci_set_master" },
	{ 0xfdf59f97, "agp_allocate_memory" },
	{ 0x86dd58b8, "__alloc_pages" },
	{ 0xcda10c1, "del_timer_sync" },
	{ 0xa349fd30, "pci_get_subsys" },
	{ 0x9811088, "proc_mkdir" },
	{ 0xe44b25be, "pci_set_dma_mask" },
	{ 0x9c2f527b, "device_register" },
	{ 0x83015749, "mutex_lock_interruptible" },
	{ 0x91d6536d, "__mutex_init" },
	{ 0x1b7d4074, "printk" },
	{ 0x859204af, "sscanf" },
	{ 0x95cc2139, "__PAGE_KERNEL" },
	{ 0x5568be43, "lock_kernel" },
	{ 0xb4f7a955, "vmap" },
	{ 0x2f287f0d, "copy_to_user" },
	{ 0xb6ed1e53, "strncpy" },
	{ 0x5c18fa9f, "fasync_helper" },
	{ 0x67224717, "dma_free_coherent" },
	{ 0x83cbc699, "mutex_lock" },
	{ 0x9a84b1ee, "class_create" },
	{ 0x8db4cf2a, "class_remove_file" },
	{ 0xa46dc984, "_spin_unlock_irqrestore" },
	{ 0xde087621, "agp_free_memory" },
	{ 0x9eac042a, "__ioremap" },
	{ 0xcbda5a08, "_read_unlock_irqrestore" },
	{ 0xc256bad8, "class_create_file" },
	{ 0x2db717fe, "up_write" },
	{ 0x6623214f, "down_write" },
	{ 0x62998708, "contig_page_data" },
	{ 0x80ca2713, "_read_lock_irqsave" },
	{ 0xbd4a9300, "dma_alloc_coherent" },
	{ 0x9df0542a, "idr_remove" },
	{ 0xf8b9eb50, "pci_find_capability" },
	{ 0xe9554252, "do_mmap_pgoff" },
	{ 0x8b2b880b, "device_create_file" },
	{ 0xbca09dc7, "idr_pre_get" },
	{ 0x5dfe8f1a, "unlock_kernel" },
	{ 0xfd3c805a, "module_put" },
	{ 0x7dceceac, "capable" },
	{ 0x6325ed11, "kmem_cache_alloc" },
	{ 0x686ba46, "__free_pages" },
	{ 0x4cf71cd2, "idr_remove_all" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3762cb6e, "ioremap_nocache" },
	{ 0x107d6ba3, "__get_free_pages" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x1ebe5b00, "get_user_pages" },
	{ 0xce06f37a, "schedule_delayed_work" },
	{ 0x2cf190e3, "request_irq" },
	{ 0x4292364c, "schedule" },
	{ 0x17d59d01, "schedule_timeout" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x4d33df45, "pv_cpu_ops" },
	{ 0xb6992b5d, "register_chrdev" },
	{ 0x3c4d59e0, "create_proc_entry" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x1321c8c9, "dev_driver_string" },
	{ 0x4b34fbf5, "block_all_signals" },
	{ 0x836d486a, "agp_backend_acquire" },
	{ 0x3aa28f45, "pci_unregister_driver" },
	{ 0xffd3c7, "init_waitqueue_head" },
	{ 0x334180bf, "idr_get_new_above" },
	{ 0x679a54f2, "init_timer" },
	{ 0x9941ccb8, "free_pages" },
	{ 0xbaadbd11, "__wake_up" },
	{ 0x72270e35, "do_gettimeofday" },
	{ 0x272552e6, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xe7ead430, "vunmap" },
	{ 0xf5a88735, "remap_pfn_range" },
	{ 0x4e4ff1fc, "unmap_mapping_range" },
	{ 0x2e60bace, "memcpy" },
	{ 0x801678, "flush_scheduled_work" },
	{ 0xfd6edb52, "pci_request_regions" },
	{ 0xb5badf43, "pv_mmu_ops" },
	{ 0x7c9049bf, "prepare_to_wait" },
	{ 0xbc631bf, "send_sig_info" },
	{ 0xedc03953, "iounmap" },
	{ 0x272d394e, "mtrr_del" },
	{ 0x9ef749e2, "unregister_chrdev" },
	{ 0x28ad5c79, "__pci_register_driver" },
	{ 0xb6e16c0e, "agp_find_bridge" },
	{ 0x141f4802, "idr_replace" },
	{ 0xd18db5c0, "agp_enable" },
	{ 0xae2587ca, "put_page" },
	{ 0x304c86c3, "class_destroy" },
	{ 0x5e1389a, "finish_wait" },
	{ 0xcb4a7f31, "device_unregister" },
	{ 0x9156acdd, "pci_dev_put" },
	{ 0x43a4938f, "vm_get_page_prot" },
	{ 0x25da070, "snprintf" },
	{ 0x15b69c0d, "vmalloc_to_page" },
	{ 0xdbd1cbf5, "agp_bind_memory" },
	{ 0xca12ddc0, "idr_init" },
	{ 0x908aa9b2, "iowrite32" },
	{ 0xbba1c14, "on_each_cpu" },
	{ 0xbe2a8941, "pci_enable_device" },
	{ 0xfcb8b131, "idr_find" },
	{ 0xd6c963c, "copy_from_user" },
	{ 0x2241a928, "ioread32" },
	{ 0x5b788a42, "vm_insert_pfn" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x3167ea19, "global_flush_tlb" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=agpgart,i2c-core";


MODULE_INFO(srcversion, "5AEEF417293187CB4E5D43D");