#include<iostream>
#include<queue>
using namespace std;
class node
{
    int data;
    node*left;
    node*right;
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root)
{
    cout<<"enter the data of root"<<endl;
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter left child"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter right child"<<endl;
    root->right=buildtree(root->right);
    return root;
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
            cout<<temp->data<<" ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

void maximum(node* root)
{
    node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    cout<<"maximum element: "<<temp->data;
}

void minimum(node* root)
{
    node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    cout<<"minimum element: "<<temp->data;
}


int main()
{
    node* root=NULL;

}