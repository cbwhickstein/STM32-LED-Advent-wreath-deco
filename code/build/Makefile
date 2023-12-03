CC = arm-none-eabi-gcc
AS = arm-none-eabi-as
LD = arm-none-eabi-ld
BIN = arm-none-eabi-objcopy
STL = st-flash
CFLAGS = -mthumb -mcpu=cortex-m3 #STM32 Properties (see stm32f103 datasheet)
CADDFLAGS = -g -Wall

SRC_PATH = ../src
SRC = $(SRC_PATH)/*.c

INC_PATH = ../include
CFLAGS += -I INC_PATH

all: app.bin

crt.o: crt.s
	$(AS) -o crt.o crt.s

compile:
	$(CC) $(CFLAGS) -c $(CADDFLAGS) -o main.o $(SRC)

app.elf: linker.ld crt.o compile
	$(LD) -T linker.ld -o app.elf crt.o main.o

app.bin: app.elf
	$(BIN) -O binary app.elf app.bin

clean:
	rm -f *.o *.elf *.bin

flash: app.bin
	$(STL) write app.bin 0x8000000

erase:
	$(STL) erase
