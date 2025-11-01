#include<stdio.h>
int main(){
    int n,j,duplicate_found=0;
    int count=0;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter %d value:",i);
        scanf("%d",&arr[i]);
    }
    printf("Original Array:\n");
    for(int i=0; i<n; i++){
        printf("%d\n",arr[i]);
    }
    printf("Duplicate Elements:\n");
    for(int i=0; i<n; i++){
        count=0;
        for(j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        if(count>0 && arr[i]!=-1){
            printf("%d\n",arr[i]);
            duplicate_found=1;
        }
        
    }
    if(!duplicate_found){
        printf("-1");
    }
    printf("\n");
    return 0;
}