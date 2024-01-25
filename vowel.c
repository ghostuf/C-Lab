//C Program to Check whether an Alphabet is Vowel or Consonant
#include <stdio.h>
#include<stdbool.h>
int main()
{
    char ch;
     bool isVowel = false;

    printf("Enter an alphabet: ");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'
    		||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
    	isVowel = true;
    	
    }
    if (isVowel == true)
        printf("%c is a Vowel", ch);
        
    else
        printf("%c is a Consonant", ch);
    return 0;
}