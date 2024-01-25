#include<stdio.h>

int main(){
    int arr[5],i,j,n=0;

    for(i=0; i<5; i++){
        printf("\nEnter element %d: ", i+1);
        scanf("%d",&arr[i]);
        printf("%d",i);
    }

    for(j=i-1; j>=0; j--){
        printf("\n%d",arr[j]);
    }
}