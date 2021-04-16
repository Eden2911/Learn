//Write a program in C to store n elements in an array and print the elements using pointer.
#include <stdio.h>
int main()
{
   int  i,n;
   printf(" Enter the number of elements to store in the array :");
   scanf("%d",&n);
   int arr1[n];
   printf(" Enter %d number of elements of the array :\n",n);
   for(i=0;i<n;i++)
      {
	  printf(" Element  %d : ",i+1);
	  scanf("%d",arr1+i);
	  }
   printf(" The elements that was entered are : \n");
   for(i=0;i<n;i++)
      {
	  printf(" Element  %d : %d \n",i+1,*(arr1+i));
	  }
	   return 0;
}
