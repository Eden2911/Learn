// Write program in C to get the sum of digits of a number using function
#include <stdio.h>
int Sum(int n);
int main()
{
    int n;
    printf("Enter the integer:\n");
    scanf("%d", &n);
    printf(" %d ", Sum(n));
    return 0;
}

int Sum(int n)
{
  int rem, sum = 0;
   while (n != 0)
    {
        rem=n%10;
        sum = sum + rem;
        n = n / 10;
    }
    return sum;
}

