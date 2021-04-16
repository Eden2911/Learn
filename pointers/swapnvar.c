//Write a program in C to swap elements using call by reference.
#include <stdio.h>
void swapElement(int *x,int *y);
int main()
{
    int element1,element2;
    printf(" Input the value of 1st element : ");
    scanf("%d",&element1);
	printf(" Input the value of 2nd element : ");
    scanf("%d",&element2);


    printf("\n The value before swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n\n",element1,element2);
    swapElement(&element1,&element2);
    printf("\n The value after swapping are :\n");
    printf(" element 1 = %d\n element 2 = %d\n\n",element1,element2);
    return 0;
}
void swapElement(int *x,int *y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
}

