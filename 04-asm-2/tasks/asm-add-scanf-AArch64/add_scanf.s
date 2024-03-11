  .text
  .global add_scanf

  .macro push Xn
    sub sp, sp, 16
    str \Xn, [sp]
  .endm

  .macro pop Xn
    ldr \Xn, [sp]
    add sp, sp, 16
  .endm

add_scanf:
  // ???

  ret

  .section .rodata

scanf_format_string:
  .string "%lld %lld"
