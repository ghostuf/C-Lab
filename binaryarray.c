#include<stdio.h>

int main(){
    int x,n = 0,i,rem = 0;
    int arr[10];

    printf("Enter a number: ");
    scanf("%d",&x);

    while(x != 0){
        rem = x%2;
        arr[n] = rem;
        x = x/2;
        n += 1;
    }

    for(i=n-1; i>= 0; i--){
        printf("%d",arr[i]);
    }
}

