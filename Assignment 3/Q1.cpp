/*Develope a menu driven program demonstrating the following operations on a stack using array: 
push(), pop(), isEmpty(), isFull(), display(), peek() */
#include<iostream>
using namespace std;

int a[10], top=-1, ele;

void push()
{
    int x;
    cout<<"enter the element to be added"<<endl;
    cin>>x;
    if(top==ele-1){
        cout<<"stack overflow"<<endl;}
        else 
        {
            top++;
            a[top]=x;
            cout<<x<<" has been pushed into stack"<<endl;
        }
    
}

void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"the element "<<a[top]<<" has been poped"<<endl;
    top--;
    
    }
}

void isEmpty()
{
    if (top==-1)
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack isn't empty"<<endl;
    }
}

void isFull()
{
    if(top==ele-1)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        cout<<"stack isn't full"<<endl;
    }
}

void display()
{
    cout<<"the stack is displayed as follows: "<<endl;
    int i;
    for(i=0;i<=top;i++)
    {
        cout<<a[i]<<endl;
    }

}

void peek()
{
    if (top==-1)
    cout<<"stack is empty"<<endl;
    else 
    cout<<"the topmost element of the stack is: "<<a[top]<<endl;
}

 int main() 
{
    cout<<"enter the size of the stack"<<endl;
    cin>>ele;
    
    char function='f';
    while(function !='e')
{
    cout<<"enter the function:"<<endl;
    
    cin>>function;
    

    switch (function)
    {
        case 'p':
        push();
        break;

        case 'o':
        pop();
        break;

        case 'y':
        isEmpty();
        break;

        case 'l':
        isFull();
        break;

        case 'k':
        peek();
        break;
        
        case 'd':
        display();
        break;

        default: 
        break;
        
        
    }


}
return 0;

}
