MEMORY
{
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 64K /*Program memory*/
  RAM (xrw)  : ORIGIN = 0x20000000, LENGTH = 20K /*stack memory (see device datasheet p. 34)*/
}
