#include<stdio.h>
int large (int [], int);
main()
{
    int n, i;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter the array of numbers:");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("The largest number is %d:", large(arr, n));
}

int large(int ary[], int no)
{
    int lar, i;
    lar=ary[0];
    for(i=0; i<no; i++)
    {
        if (ary[i]>lar)
            lar=ary[i];
    }
    return(lar);
}
