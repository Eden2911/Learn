//Write a program in C to add two numbers using pointers (call by reference means passing pointer to function)
#include <stdio.h>
int add(int *, int *);

main()
{
   int num1, num2, sum;

   printf("Enter the first integers to add:\n");
   scanf("%d", &num1);
   printf("Enter the second integers to add:\n");
   scanf("%d", &num2);

   sum = add(&num1, &num2);

   printf("The sum of the two numbers is %d", sum);

   return 0;
}

int add(int *x, int *y) {
   int sum;

   sum = *x + *y;

   return sum;
}
