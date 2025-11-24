/*Write a program interleave the first half of the queue with second half. 
Sample I/P: 4 7 11 20 5 9 Sample O/P: 4 20 7 5 11 9*/
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main()
{
    int n;
    cout<<"enter total no. of elements: "<<endl;
    cin>>n;
cout<<endl;
queue<int> q;
queue<int> m;
queue<int> d;
q.push(4);
q.push(7);
q.push(11);
q.push(20);
q.push(5);
q.push(9);

for(int i=0;i<n/2;i++)
{
    m.push(q.front());
    q.pop();
}
cout<<"displaying m:"<<endl;
display(m);
cout<<endl;

for(int i=0;i<n/2;i++)
{
    d.push(m.front());
m.pop();
d.push(q.front());
q.pop();

}
display(d);
cout<<endl;
}


