#include<stdio.h>

int main(){
    int x,count = 0,rem = 0, sum = 0;
    float avg;

    scanf("%d", &x);

    while(x !=0){
        rem = x%10;
        sum += rem;
        x = x/10;
        count+= 1;
    }

    avg = sum/count;
    printf("%.2f", avg);
    return 0;
}