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

CFLAGS	:= -g

LIBS	:=

INCLUDE	:= -I./include \
	   -I./include/arch \
	   -I./include/arch/riscv \
	   -I./include/configs \

SOURCES := arch/riscv/cpu/riscv64/boot0_entry.S \
	   drivers/serial.c \
	   main/boot0_head.c \
	   main/boot0_main.c \

OBJS	:= $(patsubst %.c,%.o,$(patsubst %.s,%.o,$(SOURCES)))
OBJO	:= $(patsubst %.o,$(OUT_DIR)/%.o,$(OBJS))
DIRS	:= $(dir $(OBJO))

$(shell for dir in $(DIRS); do if [ ! -d $$dir ]; then mkdir -p $$dir; fi done)

all: $(TARGET).elf
	echo "curr $(PWD)"

$(TARGET).elf: $(OBJS)
	@echo "Create bin file $(OUT_DIR)/$(TARGET).bin"

%.o: %.c
	@echo "Create Object $(OUT_DIR)/$@"
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(OUT_DIR)/$@

%.o: %.S
	@echo "Create Object $(OUT_DIR)/$@"
	@$(CC) $(INCLUDE) $(CFLAGS) -c $< -o $(OUT_DIR)/$@

.PHONY:
clean:
	rm -rf $(OUT_DIR)/*


