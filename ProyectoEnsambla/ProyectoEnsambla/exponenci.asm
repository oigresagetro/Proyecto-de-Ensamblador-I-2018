.586					
.model flat, C 
.stack 4096 


.code

public exponenciacion

exponenciacion proc uses esi, \
numero:int

mov eax,numero
mul numero
mov numero,eax

ret
exponenciacion ENDP
END 