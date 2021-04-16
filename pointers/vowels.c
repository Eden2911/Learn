// Write a program in C to count the number of vowels and consonants in a string using a pointer.

#include <stdio.h>
int main()
{
    char string[50];
    char *p;
    int  countV,countC;
    printf(" Input a string: ");
    gets(string);

    p=string;

    countV=countC=0;
    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U' ||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            countV++;
        else
            countC++;
        p++;
    }

    printf(" Number of vowels : %d\n Number of consonants : %d\n",countV,countC);
    return 0;
}
