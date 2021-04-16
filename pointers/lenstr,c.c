// Write a program in C to Calculate the length of the string using a pointer.

#include<stdio.h>
#include<conio.h>

int str_len(char*);

main()
 {
   char str[50];
   int length;

   printf("Enter a string : ");
   gets(str);

   length = str_len(str);
   printf("The length of the given string is : %d", length);
}

int str_len(char*p)
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
