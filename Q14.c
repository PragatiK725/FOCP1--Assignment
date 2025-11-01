#include<stdio.h>
int main(){
    int count=0;
    int n;
    int isPrime;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++){
        if(a[i]<=1)
        continue;
        isPrime=1;
        for(int j=2; j*j<=a[i]; j++){
            if(a[i]%j==0){
                isPrime=0;
                break;
            }
        }if(isPrime)
        count++;
    }
     printf("Number of prime numbers: %d\n", count);
    return 0;
}