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
void inserth(Node* &head, Node*& tail, int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=head->prev;
    tail->next=head;

}
void insertt(Node* &head, Node* &tail, int d)
{
    Node* temp=new Node(d);
    temp->prev=tail;
    temp->next=head;
    tail->next=temp;
    tail=tail->next;
}
void inserts(Node* &head, int v, int d)
{
    Node* temp=head;
    while(temp->data!=v)
    {
        temp=temp->next;
    }
    Node* n=new Node(d);
    n->next=temp->next;
    n->prev=temp;
    temp->next=n;
    n->next->prev=n;
}

void display(Node* &head)
{
    Node* temp=head;
    cout<<temp->data<<"\t";
    temp=temp->next;
    while (temp->next!=head->next)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void removeh(Node* &head, Node* &tail)
{
    head=head->next;
    delete head->prev;
    head->prev=NULL;
    tail->next=head;
}
void removet(Node* &head, Node* &tail)
{
    tail=tail->prev;
    delete tail->next;
    tail->next=head;
}
void removes(Node* &head, int v)
{
    Node* temp=head;
    while(temp->data!=v)
    {
        temp=temp->next;
    }
    
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
void search(Node *&head, int d)
{
    int count=1;
    Node* temp=head;
    while(temp->data!=d)
    {
        temp=temp->next;
        count++;
    }
    
    else
    cout<<"Node found at position "<<count<<endl;
}
int main()
{
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    tail->next=head;
    inserth(head, tail, 5);
    display(head);
    inserth(head, tail, 2);
    display(head);
    insertt(head, tail, 15);
    insertt(head, tail, 20);
    display(head);
    inserts(head, 10, 12);
    display(head);
    removeh(head, tail);
    display(head);
    removes(head,15);
    display(head);
    removes(head,12);
    display(head);
    search(head, 12);
    
}