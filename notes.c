/*#include <stdio.h>
#include <math.h>

int main()
{
    // variable = Allocated space in memory to store a value
     int x;
     x = 56;
     printf("%d",x);

}*/

//WAP to find max of 2 integers using only one if conditional construct
/*#include <stdio.h>
int main(){
    int a,b,max;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if (a>b){
        max = a;
    }
    if (a<b){
        max = b;
    }
    printf("%d",max,"is the maximum");
}*/

// WAP to find max of 2 integers using only 1 if condition and without using max(extra) variable.
/*#include <stdio.h>
int main(){
    int a=14,b=17;
    if (a>b){
        b=a;
    }
    printf("%d",b,"is the max number");

}*/

//WAP to find max of 2 integers using only 1 if conditon and without using extra(max) variable and withput changing a & b original values
#include<stdio.h>
void main(){
    int a=9,b=83;
    if(a>b){
        printf("%d is the max number\n",a);
    }
    else{
        printf("%d is the max number\n",b);
    }
}