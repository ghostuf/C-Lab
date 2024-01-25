#include<stdio.h>
//print prime numbers from 1-100

int main(){
    int flag=0,i,j;

    for(i=2; i<=100; i++){
        flag = 1; 
        for(j=2;j<i;j++){
            if(i % j == 0){
                flag = 0;
            }
        }
        if(flag){
            printf("%d\t", i);
        }
    }

    return 0;
}