#include<stdio.h>

int main(){
    int x,i,j;

    scanf("%d",&x);
    for(i=x; i != 0; i--){
        for(j = i; j>0; j--){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}