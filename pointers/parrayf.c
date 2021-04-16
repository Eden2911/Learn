//Write a program in C to store n elements in an array and print the elements using pointer through a function
#include <stdio.h>
 int prin(int *[], int );
int main()
{
   int  i,n, array;
   printf(" Enter the number of elements to store in the array :");
   scanf("%d",&n);
   int arr[n];
   printf(" Enter %d number of elements of the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" Element  %d : ",i+1);
	  scanf("%d",arr+i);
	  }
	prin(&arr[n], n);
	   return 0;
}

    int prin(int *(arr[]), int n)
              {
                  int i;
            printf(" The elements that was entered are : \n");
            for(i=0;i<n;i++)
      {
            printf(" Element  %d : %d \n",i+1,*(arr[i]));
	  }
              }
