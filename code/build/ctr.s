.cpu cortex-m3
.thumb
// end of 20K RAM
.word 0x20002800
.word _reset
.thumb_func
_reset:
    bl main
    b .
