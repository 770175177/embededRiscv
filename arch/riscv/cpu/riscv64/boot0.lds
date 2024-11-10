OUTPUT_FORMAT("elf64-littleriscv", "elf64-littleriscv", "elf64-littleriscv")
OUTPUT_ARCH("riscv")
ENTRY(_start)
SECTIONS
{
	. = 0x20000;
	. = ALIGN(4);

	.head   :
	{
		main/boot0_head.o	(.rodata)
	}
    . = ALIGN(1);
	.text :
	{
		arch/riscv/cpu/riscv64/boot0_entry.o (.text)
		*(.text)
	}
	. = ALIGN(16);
  	.rodata : { *(.rodata) }
	. = ALIGN(16);
  	.data : { *(.data) }

	. = ALIGN(4);
	.bss :
	{
	__bss_start = .;
		*(.bss)
	}
	. = ALIGN(4);
	__bss_end = .;

	_end = .;
	ASSERT(. <= (0x20000 + 0x20000), "boot0 image has exceeded its limit.")
}



