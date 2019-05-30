_add:
  arg a
  arg b
  lod a
  lod b
  add
  retv
_main:
  lda i
  ldc 0
  sti
  lda b
  ldc 1
  sti
  lda c
  lod b
  sti
_while_0:
  lod i
  ldc 100
  cmple
  test
  jz _end_while_0
  lod i
  ldc 50
  cmple
  test
  jz _else_0
  lda a
  lod i
  lda a
  add
  lod b
  ldc 1
  call _add
  sti
  jmp _end_if_else_0
_else_0:
  lda a
  lod i
  lda a
  add
  lod b
  lod b
  lod c
  add
  call _add
  sti
  lda c
  lod b
  sti
_end_if_else_0:
  lda i
  lod i
  ldc 1
  add
  sti
  lod i
  ldc 2
  cmpeq
  test
  jz _end_if_0
  lda i
  ldc 2
  sti
_end_if_0:
  jmp _while_0
_end_while0:
  ldc 0
  retv
