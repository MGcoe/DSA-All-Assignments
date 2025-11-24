#include<iostream>
using namespace std;

    int arr[100];
    int front=0, rear=0, size=5;

bool isEmpty()
{
    if (rear==front)
    {
        return true;
        
    }
    else 
    {

        return false;
    }
}

bool isFull()
{
    if (rear==size)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void enqueue(int e)
{
    if(rear==size)
    {
        cout<<"queue is full"<<endl;
    }
    else
    {
        arr[rear]=e;
        rear=rear+1;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<"No element present in queue"<<endl;
    }
    else
    {
        arr[front]=-1;
        front++;
        if(front==rear)
        {
            front=0;
            rear=0;
        }
    }
}

void qfront()
{
    if(front==rear)
    {
        cout<<"queue is empty"<<endl;
        
    }
    else
    {
        cout<<arr[front]<<endl;
    }
}

void display()
{
    int i;
    for(i=front;i<rear;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    char function=' ';
    while(function != 'x')
{
    cout<<"enter the function"<<endl;
    cin>>function;
    switch (function)
{
    case 'e':
    {
    int a;
    cout<<"enter value: "<<endl;
    cin>>a;
    enqueue(a);
    break;
    }
    
    case 'd':
    {
        dequeue();
        break;
    }

    case 'f':
    {
        qfront();
        break;
    }

    case 'E':
    {
        if(isEmpty())
        {
            cout<<"queue is empty:"<<endl;
        }
        else
        {
            cout<<"queue isn't empty"<<endl;
        }
        break;
    }
    
    case 'F':
    {
        if(isFull())
        {
            cout<<"queue is full:"<<endl;
        }
        else
        {
            cout<<"queue isn't full"<<endl;
        }
        break;
    }

    case 'D':
    display();
    break;
}
}
}