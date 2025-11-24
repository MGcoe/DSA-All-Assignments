//implement stack using 2 queues
#include<iostream>
#include<queue>
using namespace std;
queue<int> q1;
queue<int>q2;
int size=0;
void enqueue(int x)
{
    if(q1.empty())
    {
        q1.push(x);
        size++;
    }
    else
    {
        for(int i=0;i<size;i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        for(int i=0;i<size;i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
        size++;
    }
}

void dequeue()
{
    if(q1.empty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
    q1.pop();
    size--;
    }
}
void peek()
{
    if(q1.empty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    cout<<q1.front();
}

void length()
{
    cout<<size;
}
void display()
{
    if(q1.empty())
    {
        cout<<"stack is empty"<<endl;
        return;
    }
    else
    {
    for(int i=0;i<size;i++)
    {
        cout<<q1.front()<<endl;
        q1.pop();
    }
    }
}   
int main()
{
    enqueue(5);
    enqueue(4);
    display();
    
}