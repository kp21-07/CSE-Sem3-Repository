@sum
M=0

@10
D=A

(LOOP)
@END
D;JEQ

@sum
M=D+M
D=D-1

@LOOP
0;JMP
(END)

@END
0;JMP