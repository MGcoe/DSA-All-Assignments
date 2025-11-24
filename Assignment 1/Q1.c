#include <stdio.h>
#include <math.h>

int i,n, a[100];
void create()
{
    
    printf("enter the number of elements to be added:\n");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for (i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array of %d elements has been created.\n");
}

void display()
{
   
   printf("the elements of the array are displayed as follows:\n");
    for (i=0 ; i<n ; i++)
    {
     printf("%d\n",a[i]);
    }
}

void insert(){
    int c,b;
    printf("enter the index of the new element\n");
    scanf("%d",&c);
    printf("enter the value of the new element:\n");
    scanf("%d",&b);
    for (i=n;i>=c;i--)
    {
        a[i]=a[i-1];
    }
    a[c]=b;
    printf("the new array is given as:\n");
    for (i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
        
    }

}


void del()
{
    int c,d;
    printf("enter the index of the element to be deleted:\n");
    scanf("%d",&c);
    for (i=0;(i+c)<n;i++)
    {
        a[c+i]=a[c+1+i];
    } 
    
    printf("the new array is given as:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


}

void search()
{
    int s;
    int i=0;
    printf("enter the value to be searched:\n");
    scanf("%d",&s);
    while(i<n)
    {
        if (a[i]==s)
        {
        printf("element found at index %d",i);
        break;
        }
        else
        i++;
        if (i>=n)
        printf("element not found");
    }
    
}


int main(){
     
    char operation='o';
    while(operation !='e')
{
    printf("enter the operation to be performed:\n");
    
    scanf("%c",&operation);
    

    switch (operation)
    {
        case 'c':
        create();
        break;

        case 'd':
        display();
        break;

        case 'i':
        insert();
        break;

        case 'u':
        del();
        break;

        case 's':
        search();
        break;
        
        
    }
}
}
