#include<stdio.h>
int main()
{
    int c,d,i,n,e,f,j,k,a[10][10],b[10][10],g[10][10],sum=0;
    printf("enter the no. of rows of 1st matrix:\n");
    scanf("%d",&c);
    printf("enter the no. of columns of 1st matrix:\n");
    scanf("%d",&d);
    e=d;//colums of 1st matrix is equal to rows of second matrix for valid multiplication...
    printf("enter the no. of columns of second matrix:\n");
    scanf("%d",&f);
    printf("enter the elements into the 1st matrix:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the elements into the 2nd matrix:\n");
    for(i=0;i<e;i++)
    {
        for(j=0;j<f;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the 1st matrix is given as:\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the 2nd matrix is given as:\n");
    for(i=0;i<e;i++)
    {
        for(j=0;j<f;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("the multiplication of both the matrix is given as:\n");
    
    for(i=0;i<c;i++) {
        for(j=0;j<f;j++) {
            sum = 0;
            for(k=0;k<d;k++) {   // IMPORTANT: iterate over common dimension
                sum=sum + a[i][k] * b[k][j];
            }
            g[i][j] = sum;
        }
    }
    
    for(i=0;i<c;i++)
    {
        for(j=0;j<f;j++)
        {
            printf("%d\t",g[i][j]);
        }
        printf("\n");
    }
}