#include<stdio.h>
int main()
{
    int i,n,r,c,j,a[10][20];
    printf("enter the number of rows:\n");
    scanf("%d",&r);
    printf("enter the number of columns:\n");
    scanf("%d",&c);
    printf("enter elements of the array:\n");
    n=r+c;
    
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    printf("the matrix is given as:\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("the transpose of the matrix is given as:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",a[j][i]);

        }
        printf("\n");
    }

    return 0;
}