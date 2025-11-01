#include<stdio.h>
int main(){
    int n,position,element,choice;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&arr[i]);
    }
    printf("Original array\n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("Where do you want to delete the element?\n");
    printf("1.Front\n 2.Middle\n 3.End\n Enter your choice:");
    scanf("%d", &choice);
    if (choice == 1){
        position = 0;
    }
    else if (choice == 2){
        position = n / 2;
    }
    else if (choice == 3){
        position = n;
    }
    else {
        printf("Invalid choice!\n");
    }
    for(int i=position; i<n-1; i++){
        arr[i]=arr[i+1];
       
    }
    n--;
    printf("Array after deletion:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}