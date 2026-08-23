

#include<stdio.h>
void main()
{
    int A[100],n,i;

    printf("Enter the Array element number: ");
    scanf("%d",&n);

    printf("Enter the elemnt of Array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for (i=0;i<n;i++)
    {
        printf("A[%d]: %d\n",i,A[i]);
    }
}
