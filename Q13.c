#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&arr[i]);
    }
    if(n<=2){
        printf("Peak value can not be possible");
    }
    else{
        printf("Peak value(s) in the array:\n");
        for(int i=1; i<n-1; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}