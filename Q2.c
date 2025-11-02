#include<stdio.h>
int main(){
    int num1,num2;
    int small,hcf=0;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    if(num1>num2){
        small=num2;
    }
    else{
        small=num1;
    }
    for(int i=1; i<=small; i++){
        if(num1%i==0 && num2%i==0){
            if(i>hcf){
                hcf=i;
            }
        }
    }
    printf("HCF: %d",hcf);
    return 0;
}