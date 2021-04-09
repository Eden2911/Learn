#include<stdio.h>
int prime(int num);
main()
{
int num, check;
printf("prime numbers:");
printf("Enter the number to check: ");
scanf("%d", &num);
check=prime(num);

if(check==1)
    printf("The number is not prime.");
else
printf("The number is prime.");
}

int prime(int num)
{
    int i;
    for (i=2; i<num; i++)
    {
        if (num%i!=0)
        continue;
        else
            return(1);
    }

}
