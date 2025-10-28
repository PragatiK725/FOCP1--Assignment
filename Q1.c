#include<stdio.h>
#include<math.h>
int main(){
    int num,temp,original_num,remainder,sum=0,n=0;
    printf("Enter the number:");
    scanf("%d",&num);
    original_num=num;
    for(temp=num; temp!=0; n++){
        temp/=10;
    }
    for(temp=num; temp!=0; temp/=10){
        remainder=temp%10;
        sum+=pow(remainder,n);
    }
    if(sum==original_num){
        printf("Yes %d is an Armstrong number\n",original_num);
    
    }
    else{
        printf("No %d is not an Armstrong number\n",original_num);
    }
    return 0;
}