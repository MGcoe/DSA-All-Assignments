#include<stdio.h>
int main()
{
int b,c,d,e,f,i,j,a[10][10],sum=0;
printf("enter the number of rows of the matrix:\n");
scanf("%d",&b);
printf("enter the number of columns of the matrix:\n");
scanf("%d",&c);
printf("enter the elements of the matrix:\n");
for(i=0;i<b;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
}

printf("the matrix is given as:\n");
for(i=0;i<b;i++)
{
    for(j=0;j<c;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n");
}

printf("the sum of rows is given as:\n");
for(i=0;i<b;i++)
{
    for(j=0;j<c;j++)
    {
        sum=sum+a[i][j];
    }
    printf("sum of row %d = %d\n",i+1,sum);
    sum=0;
}
printf("the sum of columns is given as:\n");
for(i=0;i<c;i++)
{
    for(j=0;j<b;j++)
    {
        sum=sum+a[j][i];
    }
    printf("sum of column %d = %d\n",i+1,sum);
    sum=0;
}
}
