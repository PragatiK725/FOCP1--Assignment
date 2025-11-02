#include<stdio.h>
int main(){
    int n,count=0,count1=0;
    printf("Enter number of elements in an array:");
    scanf("%d",&n);
    int scores[n];
    
    for(int i=0; i<n; i++){
        printf("Enter %d numbers to be stored in the array:",n);
        scanf("%d",&scores[i]);
    }
    int even_arr[n],odd_arr[n];
    for(int i=0; i<n; i++){
        if(scores[i]%2==0){
            even_arr[count++]=scores[i];
        }
        else{
            odd_arr[count1++]=scores[i];
        }
    }
    printf("\nScores:");
    for(int i=0; i<n; i++){
        printf("%d\n",scores[i]);

    }
    

    printf("\nEven Scores:");
    for(int j=0; j<count; j++){
        printf("%d\n",even_arr[j]);

    }
    

    printf("\nOdd Scores:");
    for(int j=0; j<count1; j++){
        printf("%d\n",odd_arr[j]);

    }
    
    return 0;
}