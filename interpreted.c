/********************************/
/****   Rule 110 simulator   ****/
/**     Joris Hartog(2018)     **/
/*                              */
/* This is a Rule 110 simulator */
/*  written in Brainfuck which  */
/**  is fed to an interpreter  **/
/****      written in C.     ****/
/********************************/

        #include <stdio.h>
        #include<stdlib.h>
        int main(){char l,
        *m=calloc(999,99),
	*p=m,c[326]="%c\0"

"->>>+[->>>,----------]>>>-<<<<<<"
"[>>++++++[-<++++++>]<+[-<->]<<<<"
"]>>>+[[-[->+>+<<]>>[-<<+>>]>[-<+"
"<+>>>+<]<[->+<]<<[->>+>>+<<<<]>>"
"[-<<+>>]<<<<<[->>>>>+>>+<<<<<<<]"
">>>>>[-<<<<<+>>>>>]>>---[<<<[>+<"
"[-]]>>>[+]]<<<[-]>>+]>>-<<<[-]<<"
"+[[-]<<<+]>>->>>>>>+[-[->+<]>>++"
"++[->>++++<<]>>[-<<++>>]<<<[>+++"
"<-<+>]>.[-]>+],[-]-<+[-<+]->>>>>"
           ">+]",*i=c;

 for(;;l=1){if(*++i==']'&&*p)while
 (l){l+=(*--i==']')-(*i=='[');}if(
 *i=='+')(*p)++;if(*i=='-')(*p)--;
 if(*i=='['&&!*p)while(l){l-=(*++i
 ==']')-(*i=='[');}if(*i=='>')p++;
 if(*i=='<')p--;if(*i=='.')printf(
  c,*p);if(*i==',')scanf(c,p);}}
