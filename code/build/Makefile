CC = arm-none-eabi-gcc
AS = arm-none-eabi-as
LD = arm-none-eabi-ld
BIN = arm-none-eabi-objcopy
STL = st-flash
CFLAGS = -mthumb -mcpu=cortex-m3 #STM32 Properties (see stm32f103 datasheet)
CADDFLAGS = -g -Wall -Wextra

SRC_PATH = ../src
SRC = $(wildcard $(SRC_PATH)/*.c)

INC_PATH = ../include
CFLAGS += -I $(INC_PATH)

OBJ_PATH = ./obj
COMPILE_OBJ = $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRC))

all: clean create_obj_folder app.bin

create_obj_folder:
	mkdir -p obj

crt.o: crt.s
	$(AS) -o $(OBJ_PATH)/crt.o crt.s

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) -c $(CADDFLAGS) -o $@ $<

app.elf: linker.ld crt.o $(COMPILE_OBJ)
	$(LD) -T linker.ld -o app.elf $(OBJ_PATH)/*.o

app.bin: app.elf
	$(BIN) -O binary app.elf app.bin

clean:
	rm -f *.o *.elf *.bin
	rm -rf obj

flash: all
	$(STL) write app.bin 0x8000000

erase:
	$(STL) erase

debug:
	gnome-terminal -- openocd -f /usr/share/openocd/scripts/interface/stlink-v2.cfg -f /usr/share/openocd/scripts/target/stm32f1x.cfg
	gdb-multiarch app.elf -ex "target remote localhost:3333"

dissasable:
	arm-none-eabi-objdump -d obj/main.o | less