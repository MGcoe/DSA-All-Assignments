/*Display all the node values in a circular linked list, repeating value of head node at the
end too.*/
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
void display(Node* &head, Node*&tail)
{
    Node*temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"\t"
        temp=temp->next;
    }
    cout<<temp->next;
}
int main()
{
    Node* node1=new Node(3);
    Node*head=node1;
    Node*tail=node1;
    head->next=NULL;
    tail->next=head;
}