#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c=a+(~b+1);
    printf("Subtraction of Numbers: %d",c);
    return 0;
}