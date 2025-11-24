/*Given a Circular linked list. The task is split into two Circular Linked lists. If there are an
odd number of nodes in the given circular linked list then out of the resulting two halved
lists, the first list should have one node more than the second list.*/
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insert(Node* &head, Node* &tail, int d)
{
    Node* temp=new Node(d);
    temp->prev=tail;
    temp->next=head;
    tail->next=temp;
    tail=tail->next;
    head->prev=tail;
}
void display(Node* &head)
{

    Node* temp=head;
    cout<<temp->data<<"\t";
    temp=temp->next;

    while(temp!=head)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;

    }
    cout<<endl;
    
}

void part(Node* &head)
{
    Node* fast=NULL;
    Node* slow=NULL;
    fast=head;
    slow=head;
    while(fast->next != head && fast->next->next != head)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    if (fast->next->next == head)
    fast = fast->next;
    fast->next=slow->next;
    slow->next->prev=fast;
    Node* h1 = slow->next;
    slow->next=head;
    head->prev=slow;
    Node* t1=head;
    Node* t2=h1;
    cout<<t1->data<<"\t";
    t1=t1->next;
    while(t1!=head)
    {
        cout<<t1->data<<"\t";
        t1=t1->next;
    }
    cout<<endl;
    cout<<t2->data<<"\t";
    t2=t2->next;
    while(t2!=h1)
    {
        cout<<t2->data<<"\t";
        t2=t2->next;
    }
    cout<<endl;

}
int main()
{
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    tail->next=head;
    insert(head, tail, 20);
    insert(head, tail, 30);
    
    display(head);
    part(head);
}