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
//inorder traversal
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    node* root = NULL;
    root = buildtree(root);//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    levelordertraversal(root);
    inorder(root);
    preorder(root);
    postorder(root);
}