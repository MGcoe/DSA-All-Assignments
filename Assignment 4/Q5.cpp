//Write a program to implement a stack using (a) Two queues and (b) One Queue. 
#include<iostream>
#include<queue>
using namespace std;
int size=0;
//using one queue
queue<int> q;
void enqueue(int x)
{
    
    if(q.empty())
    {
        q.push(x);
        size++;
    }
    else
    {
        q.push(x);
        for(int i=0;i<size;i++)
        {
            int temp;
            temp=q.front();
            q.pop();
            q.push(temp);

        }
        size++;
    }
}

void dequeue()
{
    q.pop();
}
void peek()
{
    cout<<q.front();
}
void display()
{
    for(int i=0;i<size;i++)
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    peek();
}