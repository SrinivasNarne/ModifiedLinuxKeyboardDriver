#
# Makefile for the USB input drivers
#

usbhid-y        := hid-core.o hid-quirks.o
usbhid-$(CONFIG_USB_HIDDEV)     += hiddev.o
usbhid-$(CONFIG_HID_PID)        += hid-pidff.o

#obj-$(CONFIG_USB_HID)           += usbhid.o
obj-$(CONFIG_USB_KBD)           += usbkbd.o
#obj-$(CONFIG_USB_MOUSE)         += usbmouse.o

KERNEL_DIR = /usr/src/linux-headers-$(shell uname -r)

all: modules

modules:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(shell pwd) modules
clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order

