/*Write a program to find the middle of a linked list. 
Input: 1->2->3->4->5 
Output: 3*/
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insert(Node* & tail){
    int d;
    cout<<"enter value to be inserted: "<<endl;
    cin>>d;
    Node*temp=new Node(d);
    tail->next=temp;
    temp->next=NULL;
    tail=temp;
}

void display(Node*&head)
{
    Node*temp=head;
    
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->data;
        temp=temp->next;
        }
        else{
        cout<<temp->data<<"->";
        temp=temp->next;
        }
    }
    cout<<endl;
}

void Middle(Node*&head)
{
    Node*extra=head;
    Node*temp=head;
    int count=0,i;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    cout<<"total elements in linked list= "<<count<<endl;
    if(count%2==0)
    {
    for(i=0;i<count/2-1;i++)
    {
        extra=extra->next;
    }
    cout<<"middle elements are "<<extra->data<<" and "<<extra->next->data<<endl;
    }
    else
    {
        for(i=0;i<count/2;i++)
    {
        extra=extra->next;
    }
    cout<<"middle element = "<<extra->data<<endl;
    }

}
int main()
{
    int n,l,i;
    cout<<"enter the value in the first node: "<<endl;
    cin>>n;
    Node*Node1=new Node(n);
    Node* head=Node1;
    Node* tail=Node1;
    head->next=NULL;
    tail->next=NULL;
    cout<<"enter the number of elements to be inserted: "<<endl;
    cin>>l;
    for(i=0;i<l;i++)
    {
        insert(tail);
    }
    
    display(head);
    Middle(head);

}