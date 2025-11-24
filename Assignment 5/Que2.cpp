/*Write a program to count the number of occurrences of a given key in a singly linked 
list and then delete all the occurrences.  
Input: Linked List :  1->2->1->2->1->3->1 , key:  1                                                                    
Output: Count: 4 ,  Updated Linked List: 2->2->3. */
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
void remove(Node* & head, int key)
{
    Node*temp=head;
    Node*prev=head;
    while(temp!=NULL)
    {
        if(head->data==key)
        {
        Node* del=head;
        head=head->next;
        del->next=NULL;
        delete del;
        temp=head;
        prev=head;
        }

        else if(temp->data==key)
        {
            Node*del=temp;
            prev->next=temp->next;
            temp->next=NULL;
            temp=prev->next;
            delete del;
        }
        else{
        prev=temp;
        temp=temp->next;}
        
        
    }
    
}
int count(Node* & head, int key)
{ 
    
    int count=0;
    Node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            count++;
        }
        temp=temp->next;
    }
    return count;

}
int main()
{
    int n, q,i,k,c;
    cout<<"enter the value of 1st node: "<<endl;
    cin>>n;
    Node* Node1=new Node(n);
    Node* head=Node1;
    Node* tail= Node1;
    head->next=NULL;
    tail->next=NULL;
    cout<<"enter the number of elements to be inserted: "<<endl;
    cin>>q;
    for(i=0;i<q;i++)
    {
        insert(tail);
    }
    display(head);
    cout<<"enter key: "<<endl;
    cin>>k;
    c=count(head,k);
    cout<<"count = "<<c<<endl;
    remove(head,k);
    cout<<"the updated linked list is given as: "<<endl;
    display(head);



}