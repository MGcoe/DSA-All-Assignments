#include<iostream>
#include<string>
using namespace std;
class Node
{
    public:
    string str;
    Node* prev;
    Node* next;
    Node(string s)
    {
    this->str=s;
    this->prev=NULL;
    this->next=NULL;
    }
};
void insert(Node* &tail, string s)
{

    Node*temp=new Node(s);
    temp->prev=tail;
    tail->next=temp;
    tail=tail->next;

}
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->str<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

void pal(Node* &head)
{
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    Node* curr=new Node(temp->str);
    Node* t1=curr;
    Node* h1=curr;
    temp=temp->prev;
    while(temp!=NULL)
    {
        Node* cum=new Node(temp->str);
        cum->prev=t1;
        t1->next=cum;
        t1=t1->next;
        temp=temp->prev;
    }
    bool check=false;
    Node* r1=head;
    Node* r2=h1;
    while(r1!=NULL&&r2!=NULL)
    {
        if(r1->str==r2->str)
        {
            r1=r1->next;
            r2=r2->next;
            check=true;
        }
        else
        {
            cout<<"not palindrome"<<endl;
            break;
        }
    }
    if(check==true)
    {
        cout<<"palindrome"<<endl;
    }


}
int main()
{
Node* n1=new Node("l");
Node* head;
Node* tail;
head=n1;
tail=n1;
insert(tail, "e");
insert(tail, "v");
insert(tail, "e");
insert(tail, "l");
display(head);
pal(head);
}