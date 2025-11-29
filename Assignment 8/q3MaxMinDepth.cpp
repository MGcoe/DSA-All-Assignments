#include<iostream>
#include<queue>
using namespace std;
class node{
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
    cout<<"enter the data for node"<<endl;
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    cout<<"enter data for left of root node"<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for right of root node"<<endl;
    root->right=buildtree(root->right);
    return root;

}

void levelordertraversal(node* root)
{
    if(root==NULL)
    {
        return;
    }
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
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        }
    }
}
int Maxdepth(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=Maxdepth(root->left);
    int right=Maxdepth(root->right);

    return 1+ max(left, right);
}

int Mindepth(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int left=Mindepth(root->left);
    int right=Mindepth(root->right);

    if(left==0)
    {
        return 1+right;
    }
    if(right==0)
    {
        return 1+left;
    }

    return 1+ min(left, right);
}