//Square Matrix

#include<stdio.h>
void main ()
{
    int n,row,col,sum=0,sum1=0;
    printf("Enter The number of Row and Col:");
    scanf("%d",&n);
    int A[n][n];

    for (row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("A[%d][%d]:",row,col);
            scanf("%d",&A[row][col]);
            sum=sum+A[row][col];

            if (row==col)
            {
                sum1=sum1+A[row][col];
            }

        }
    }



    for (row=0;row<n;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("  %d  ",A[row][col]);
        }
        printf("\n");
    }

    printf("Total Sum:%d\n",sum);
    printf("Diagonal Sum:%d\n",sum1);

    if(sum1==sum)
    {
        printf("IUBAT Matrix");
    }

    else
    {
        printf("Not IUBAT Matrix");

    }
    

}
