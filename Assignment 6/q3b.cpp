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
        this->prev=NULL;
        this->next=NULL;
    }
};
int count=1;
void inserts(Node* &head, Node* &tail, int d)
{

    Node*temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=tail->next;
    tail->next=head;
    count++;

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
    cout<<"size of linked list = " <<count<<endl;
}
int main()
{
    Node* n1= new Node(10);
    Node* head;
    Node* tail;
    head=n1;
    tail=n1;
    head->next=head;
    inserts(head, tail, 20);
    inserts(head, tail, 30);
    inserts(head, tail, 40);
    inserts(head, tail, 50);
    inserts(head, tail, 60);
    display(head);

}