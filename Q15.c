#include<stdio.h>
int main(){
    int n, temp;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&arr[i]);
    }
    temp=arr[n-1];
    for(int i=n-1; i>0; i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    printf("Array after one clockwise rotation:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}