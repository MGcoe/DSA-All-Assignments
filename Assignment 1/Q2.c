#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,a[100],j;
    printf("enter the number of elements into the array:\n");
    scanf("%d",&n);
    printf("enter the elements into the array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (a[i]==a[j])
            {
                for(;j<n;j++)
                a[j]=a[j+1];
                n--;
            }
            if (a[i]==a[n-1])
            {
                n--;
            }
        }
        
    }
    printf("the array with the deleted entries is given as:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}