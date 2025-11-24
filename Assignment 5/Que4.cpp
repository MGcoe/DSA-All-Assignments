/*Write a program to reverse a linked list. 
Input: 1->2->3->4->NULL 
Output: 4->3->2->1->NULL 
*/
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
void reverse(Node*&head, Node*&tail)
{
    Node* prev=head;
    Node* temp= head->next;
    
    while (temp!=NULL)
    {
        Node* store=temp->next;
        temp->next=prev;
        prev=temp;
        temp=store;

        
    }
    head->next=NULL;
    Node*ch;
    ch=head;
    head=tail;
    tail=ch;


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
    reverse(head, tail);
    display(head);
}