/*Develop a menu driven program for the following operations on a Singly Linked 
List. 
(a) Insertion at the beginning. 
(b) Insertion at the end. 
(c) Insertion in between (before or after a node having a specific value, say 'Insert a 
new Node 35 before/after the Node 30'). 
(d) Deletion from the beginning. 
(e) Deletion from the end. 
(f) Deletion of a specific node, say 'Delete Node 60'). 
(g) Search for a node and display its position from head. 
(h) Display all the node values.*/
#include<iostream>
#include<string>
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
void InsertB(Node* &head, int d)
{
    Node* temp= new Node(d);
    temp->next=head;
    head=temp;
    
}

void InsertE(Node* &tail, int d)
{
    Node*temp=new Node(d);
    tail->next=temp;
    temp->next=NULL;
    tail=tail->next;
}

void InsertM(Node*&head, int d, int e)
{
    Node*temp=head;
    Node*NNode=new Node(d);
    while(temp->data!=e)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        cout<<"element not found! "<<endl;
    }
    NNode->next=temp->next;
    temp->next=NNode;

}

void delB(Node* &head)
{
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void delE(Node* &head, Node*&tail)
{
    
    Node*temp=head;
    Node*del=tail;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    tail=temp;
    tail->next=NULL;
    delete del;

}

void delS(Node*head, int val)
{
    Node* curr=head;
    Node* prev=head;
    while(curr->data!=val)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

void search(Node* &head, int val)
{
    int count=1;
    Node* temp=head;
    while(temp->data!=val)
    {
        temp=temp->next;
        count++;
    }
    cout<<"element found at "<<count-1<<" positions after head"<<endl;
}

void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main()
{
    int d;
    cout<<"enter the element in the first node: "<<endl;
    cin>>d;
    cout<<endl;
    Node*Node1=new Node(d);
    Node* head= Node1;
    Node*tail= Node1;
    head->next=NULL;
    tail->next=NULL;
   
    char function;
    while (function!='f')
    {
        cout<<"enter the function to be performed: "<<endl;
        cin>>function;
        switch (function)
        {
            case 'b':
            {
                int g;
            cout<<"insert value to be added:"<<endl;
            cin>>g;
            InsertB(head,g);
            }
            break;
            
            case 'e':
            {
            int g;
            cout<<"insert value to be added:"<<endl;
            cin>>g;
            InsertE(tail,g);
            }
            break;

            case 'm':
            {
            int g,e;
            cout<<"insert value to be added:"<<endl;
            cin>>g;
            cout<<"enter prior value: "<<endl;
            cin>>e;
            InsertM(head, g, e);
            }
            break;

            case 'a':
            delB(head);
            break;

            case 'c':
            delE(head, tail);
            break;

            case 'n':
            {
            int g;
            cout<<"insert value to be deleted:"<<endl;
            cin>>g;
            delS(head,g);
            }
            break;

            case 'd':
            {
            display(head);
            }
            break;

            case 's':
            {
            int g;
            cout<<"insert value to be searched:"<<endl;
            cin>>g;
            search(head,g);
            }
            break;
            
        }
    }


}