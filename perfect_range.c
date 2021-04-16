//Write a program in C to print all perfect square numbers in given range using the function.
#include<stdio.h>
int perfect(int , int);
main()
{
int num, start, end;
printf("Enter the starting range: ");
scanf("%d", &start);
printf("Enter the ending range: ");
scanf("%d", &end);

perfect(start, end);
}

int perfect(int start, int end )
{
    int i, j;
    for (i=start; i<=end; i++)
        {
    for (j=0; j<=i; j++)
    {
        if(j*j==i)
        printf("\nPerfect square number %d: %d", j+1, i);
    }
    }

}
