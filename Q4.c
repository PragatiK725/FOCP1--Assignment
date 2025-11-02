#include<stdio.h>
int main(){

//Swapping Two Numbers:
    int a,b,temp;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    printf("Original numbers:\nA=%d\tB=%d\n",a,b);
    printf("After Swapping\n");

//Using temp variable:
    temp=a;
    a=b;
    b=temp;
    printf("\nUsing temp variable: A=%d B=%d",a,b);

//Using Pointer Manipulation:
    int* aPtr=&b;
    int* bPtr=&a;
    printf("\nUsing Pointr Manipulation: A=%d B=%d",*bPtr,*aPtr);

//Using Arithmetic Operators:
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nUsing Arithmetic Operator: A=%d B=%d",b,a);
    
//Using Bitwise XOR:
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nUsing Bitwise XOR: A=%d B=%d",a,b);

    return 0;
}