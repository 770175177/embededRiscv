TARGET	:= cvbs-demo
OUT_DIR	:= out

PWD		:= $(shell pwd)
LD_FILE		:= $(PWD)/arch/riscv/cpu/riscv64/boot0.lds
COMPILER_PREFIX	:= $(PWD)/prebuilt/gcc/riscv64-glibc-gcc-thead_20200702/bin/riscv64-unknown-linux-gnu-
CC		:= $(COMPILER_PREFIX)gcc
LD		:= $(COMPILER_PREFIX)ld
OBJDUMP		:= $(COMPILER_PREFIX)objdump
OBJCOPY		:= $(COMPILER_PREFIX)objcopy
OBJSIZE		:= $(COMPILER_PREFIX)size

CFLAGS	:= -g \
	   -nostdlib \

DEFINE	:= -D__KERNEL__ \

LIBS	:=

INCLUDE	:= -I./include \
	   -I./include/arch \
	   -I./include/arch/riscv \
	   -I./include/configs \

SOURCES := arch/riscv/cpu/riscv64/boot0_entry.S \
	   arch/riscv/cpu/riscv64/arch_timer.c \
	   board/sun20iw1p1/sun20iw1p1/clock.c \
	   common/iobase_sunxi.c \
	   common/console.c \
	   drivers/pinmux.c \
	   drivers/serial.c \
	   main/boot0_head.c \
	   main/boot0_main.c \

CFLAGS	+= $(DEFINE)

OBJS	:= $(patsubst %.c,%.o,$(patsubst %.S,%.o,$(SOURCES)))
OBJO	:= $(patsubst %.o,$(OUT_DIR)/%.o,$(OBJS))
DIRS	:= $(dir $(OBJO))

$(shell for dir in $(DIRS); do if [ ! -d $$dir ]; then mkdir -p $$dir; fi done)

all: $(TARGET).elf
	@echo "curr $(PWD)"

$(TARGET).elf: $(OBJS)
	@echo "Link all, Create ELF file $(OUT_DIR)/$@"
	@$(CC) $(INCLUDE) $(CFLAGS) $(LIBS) $(OBJO) -o $(OUT_DIR)/$@ \
		-T$(LD_FILE) -Wl,-Map=$(OUT_DIR)/$(TARGET).map
	@$(OBJSIZE) $(OUT_DIR)/$@

%.o: %.c
	@echo "Create C Object $(OUT_DIR)/$@"
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(OUT_DIR)/$@

%.o: %.S
	@echo "Create S Object $(OUT_DIR)/$@"
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(OUT_DIR)/$@

.PHONY:
clean:
	rm -rf $(OUT_DIR)/*


