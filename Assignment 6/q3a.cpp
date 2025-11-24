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
void inserts(Node* &tail, int d)
{

    Node*temp=new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=tail->next;
    count++;

}
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
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
    inserts(tail, 20);
    inserts(tail, 30);
    inserts(tail, 40);
    inserts(tail, 50);
    inserts(tail, 60);
    display(head);

}