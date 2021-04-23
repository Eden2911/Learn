#include<stdio.h>
int prime(int num);
main()
{
int num, check;
printf("Enter the number to check: ");
scanf("%d", &num);
check=prime(num);

if(check==1)
    printf("\nThe number is not prime.");
if(check==0)
printf("\n The number is prime.");
}

int prime(int num)
{
    int i;
    for (i=2; i<=num/2; i++)
    {
        if (num%i!=0)
        continue;
        else
            return(1);
    }
return(0);
}
