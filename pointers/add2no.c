//Write a program in C to add two numbers using pointers
#include<stdio.h>
main()
{
   int num1, num2, *p, *q, sum;

   printf("Enter the first integer to add:");
   scanf("%d", &num1);
   printf("\nEnter the second integer to add:");
   scanf("%d", &num2);

   p = &num1;
   q = &num2;

   sum = *p + *q;

   printf("\nSum of the numbers = %d\n", sum);

   return 0;
}
