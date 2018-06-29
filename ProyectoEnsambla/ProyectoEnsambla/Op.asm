.model flat , C
.586
.stack 4096

PUBLIC _sumaE
PUBLIC valorAbs

EXTERN puts:PROC

.code

_sumaE proc  uses ebx ecx , \
numb:dword , \
num:dword

	mov ebx,numb
	mov eax,num
	add eax,ebx

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