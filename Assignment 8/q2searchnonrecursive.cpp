#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
    this->data=d;
    this->left=NULL;
    this->right=NULL;
    }
};
node* buildtree(node* root)
{
    cout<<"enter data of node"<<endl;
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    
    cout<<"enter data to the left of node"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data to the right of node"<<endl;
    root->right=buildtree(root->right);
}
void display(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
            cout<<temp->data<<" ";
        }
    }
}

void search(int s, node* root)
{
    node* temp=root;
    while(temp!=NULL)
    {
        if(s==temp->data)
        {
            cout<<"found! "<<endl;
            return;
        }
        else if(s < temp->data)
        {
            temp=temp->left;
        }
        else
        {
            temp=temp->right;
        }
    }
    cout<<"not found!"<<endl;
}
int main()
{
    node* root= NULL;
    root=buildtree(root);
    display(root);
    search(2,root);

}