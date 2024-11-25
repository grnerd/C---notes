
/*#include<stdio.h>

void main(){
    int a=10;
    int b=20;
    int c=a && (b=30); // b=30 gives CE L value required error
    printf("%d %d %d\n",a,b,c);
}*/

//in logic AND (&&) if 1st argument is 0 then we will not execute the 2nd arg and the result is zero
//in logic OR (||) if the  1st arg is non-zero then we will not execute the 2nd arg and the result is 1
//&& and || operands are always evaluated from left to right 
// SHORT CIRCUIT OPERATOR - the ability to find the result based only on 1st arg.

//Conditional Operators or Ternary Operator(?:)

// C program to find largest among two

#include<stdio.h>

void main(){
    int a=50;
    int b=60;
    (a>b) ? printf("a is greater\n") : printf("b is greater\n");

}
