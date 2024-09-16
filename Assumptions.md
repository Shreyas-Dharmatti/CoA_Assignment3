move $1,$2 $1=$2 
This is a pseudo-instruction (provided by assembler, not processor!) Copy from register to register


la $1,label $1=Address of label 
this is a pseudo-instruction (provided by assembler, not processor!) Loads computed address of label (not its contents) into register load immediate

li $1,100 $1=100 
this is a pseudo-instruction (provided by assembler, not processor!) Loads immediate value into register

div $2,$3 $hi,$low=$2/$3 
Remainder stored in special register hi & Quotient stored in special register lo 