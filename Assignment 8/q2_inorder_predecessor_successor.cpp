#include<iostream>
#include<queue>
using namespace std;
class node
{
    public:
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

void inorderpre(node* root, int n, node* &prev)
{
    
    node* temp=root;
    if(root->data==n)
    {
        if(root->left)
        {
        temp=root->left;
        while(temp->right)
        {
        temp=temp->right;
        }
         cout<<temp->data;
         return;
        }
        else 
        {
        if(prev==NULL)
        cout<<"no predecessor"<<endl;
        else
        {
        cout<<prev->data<<endl;
        return;
        }
        }
    }
    
    if(root->data>n)
    {
    inorderpre(root->left,n,prev);
    return;
    }
    else 
    {
        prev=root;
    inorderpre(root->right,n,prev);
    return;
    }
}

void inordersucc(node* root, int n, node* &prev)
{
    node* temp=root;
    if(root->data==n)
    {
        if(root->right)
        {
            temp=root->right;
            while(temp->left)
            {
            temp=temp->left;
            }
            cout<<"successor= "<<temp->data<<endl;
            return;
        }
        else
        {
        if(prev==NULL)
        {
            cout<<"successor doesn't exist"<<endl;
            return;
        }
        else
        {
            cout<<"successor = "<<prev->data<<endl;
            return;
        }
        }
    }
    if(root->data<n)
    {
        inordersucc(root->right, n, prev);
        return;
    }
    else
    {
        prev=root;
        inordersucc(root->left, n, prev);
        return;
    }
}


int main()
{
    node*prev=NULL;
    node*root=NULL;
    root=buildtree(root);
    display(root);
    inordersucc(root, 3, prev);
}