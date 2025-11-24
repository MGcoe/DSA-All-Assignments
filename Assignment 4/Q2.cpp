#include<iostream>
using namespace std;
int front=-1, rear=-1 , N=5, arr[5];
bool isEmpty()
{
    if(front==-1&&rear==-1)
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
    if((rear+1)%N==front)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

void enqueue(int n)
{
    if(front==-1&&rear==-1)
    {
        front=0;
        rear=0;
        arr[rear]=n;
    }
    else if (isFull())
    {
        cout<<"the queue is full"<<endl;
    }
    else
    {
        rear=(rear+1)%N;
        arr[rear]=n;
    }
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<"the queue is empty"<<endl;
        return;
    }
    else if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%N;
    }
    
}

void display()
{
    int i=front;
    if(isEmpty())
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    while(i!=rear)
    {
        cout<<arr[i]<<endl;
        i=(i+1)%N;
    }
    cout<<arr[rear]<<endl;
    
}

void peek()
{
    if(isEmpty())
    {
        cout<<"the queue is Empty"<<endl;
        return;
    }
    cout<<arr[front]<<endl;
}

int main()
{
char function = ' ';
while(function != 'x')
{
cout<<"enter the function to be performed: "<<endl;
cin>>function;
switch(function)
{
    case 'E':
    {
    if(isEmpty())
    {
        cout<<"queue is empty"<<endl;
        
    }
    else
    {
        cout<<"queue is not empty"<<endl;
    }
    break;
}

    case 'F':
    {
    if(isFull())
    {
        cout<<"queue is full"<<endl;
        
    }
    else
    {
        cout<<"queue is not full"<<endl;
    }
    break;
}

    case 'e':
    {
        int n;
        cout<<"enter the value : "<<endl;
        cin>>n;
        enqueue(n);
        break;
    }

    case 'd':
    {
        dequeue();
        break;
    }
    case 'D':
    {
        display();
        break;
    }
    case 'p':
    {
        peek();
        break;
    }
}
}

}