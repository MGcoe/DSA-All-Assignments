#include<iostream>
using namespace std;
class Node
{
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

int main()
{
    Node* n1=new Node(10);
    Node* head=n1;
    Node* tail=n1;
    tail->next=head;

}