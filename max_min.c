#include<stdio.h>


int main(){
    int arr[10];
    int max,i;


    for(i=0; i<5; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d",&arr[i]);
    }

    for(i=0; i<5; i++){
        if(i==0){
            max = arr[i];
        }
        else if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Maximum Value: %d",max);
}