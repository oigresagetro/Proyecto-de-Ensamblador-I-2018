.model flat , C
.586
.stack 4096

PUBLIC _sumaE
PUBLIC valorAbs

EXTERN puts:PROC
.data

rsl  dd 0

.code

_sumaE proc  uses ebx ecx , \
numb:dword , \
num:dword

	fld	numb	        ; need to convert 32-bit to 64-bit
	fld	num
	fadd
	fstp	rsl		; store sum in z

	mov	eax, rsl

  ret
_sumaE endp

valorAbs proc  uses ebx ecx , \
nega:dword 

cmp nega,0
jg exit
	neg nega
exit:
	mov eax,nega

  ret
valorAbs endp



END