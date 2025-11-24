#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node*next;
    Node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
};
void insertb(Node* &head, Node* &tail, int x)
{
    Node*temp=new Node(x);
    if(head==NULL)
    {
    head=temp;
    head->next=tail;
    tail->next=head;
    }
    else
    {
    temp->next=head;
    head=temp;
    tail->next=head;
    }
}

void inserte(Node* &tail, Node* &head, int x)
{
    Node* temp=new Node(x);
    

        tail->next=temp;
        tail=temp;
        tail->next=head;
    
}
void insertbsn(Node* &head, int n, int x)
{
    Node* temp=new Node(x);
    Node* search=head;
    while(search->next->data!=n)
    {
        search=search->next;
    }
    temp->next=search->next;
    search->next=temp;
    
}
void show(Node* &head)
{
    Node*temp=head;
    if(temp==head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    while(temp!=head)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<endl<<endl;

}

void remove(Node* &head, Node* &tail, int x)
{
    Node*temp=head->next;
    Node*prev=head;
    if(head->data==x)
    {
        head=head->next;
        prev->next=NULL;
        tail->next=head;
        delete prev;
        return;
    }
else{
    while(temp->data!=x)
    {
        prev=temp;
        temp=temp->next;
    }
    if(temp==tail)
    {
        prev->next=head;
        tail->next=NULL;
        delete tail;
        return;
    }
    else{
    prev->next=temp->next;
    temp->next=NULL;
    delete temp;
    }
  }
}

void search(Node* &head, int x)
{
    int count=0;
    Node* temp=head;
    if(head->data==x)
    {
        cout<<"element found at head"<<endl;
        return;
    }
    else 
    {
        while(temp->data!=x)
        {
        temp=temp->next;
        count++;
        }
    }
    cout<<"element found at "<<count<<" positions from the head"<<endl;

}

void display(Node* &head, Node*&tail)
{
    Node*temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<tail->data<<"\t"<<tail->next->data;
}

int main()
{
    Node* node1=new Node(3);
    Node*head=node1;
    Node*tail=node1;
    head->next=NULL;
    tail->next=head;
    inserte(tail, head, 6);
    show(head);
    insertb(head, tail, 1);
    show(head);
    insertb(head, tail, 2);
    show(head);
    insertb(head, tail, 4);
    show(head);
    inserte(tail, head, 5);
    show(head);
    insertbsn(head, 2, 7);
    show(head);
    remove(head,tail,5);
    show(head);
    search(head, 6);
    display(head, tail);


}