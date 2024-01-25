#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    char number[] = "4137894711755904";
    bool isDouble = false;
    int sum = 0;

    for(int i = strlen(number) - 1; i >= 0; i--){
        int digit = number[i] - '0';

        if(isDouble)
        {
            digit *= 2;
            if(digit > 9){
                digit -= 9;
            }
        }
        isDouble = !isDouble; 
        sum += digit;
    }

    if(sum % 10 == 0){
        printf("Valid!\n");
    } else {
        printf("Invalid!\n");
    }

    return 0;
}