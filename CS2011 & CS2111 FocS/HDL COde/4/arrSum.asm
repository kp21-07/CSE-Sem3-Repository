@LEN 
 
// Initiating sum and index 
@sum 
M=0 
@i 
M=0 
@ARR

(LOOP) 
@i 
D=M 
@LEN 
D=M-D 
@END 
D;JEQ 

@i
D=M

@ARR 
A=D+M
D=M 
 
@sum 
M=D+M 
 
@i 
M=M+1 

@LOOP
0;JMP
 
(END)

@END
0;JMP