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


node* insert(node* root, int n)
{
    
    if(root==NULL)
    {
        node* t=new node(n);
        root=t;
        return root;
    }
    if(root->data==n)
    {
        cout<<"node already exists"<<endl;
        return root;
    }
    if(n>root->data)
    {
        root->right=insert(root->right,n);
    }
    else
    {
        root->left=insert(root->left, n);
    }
    return root;
}

node* inordersucc(node* root, int n, node* &prev)
{
    if(root == NULL) return NULL;

    if(root->data == n)
    {
        
        if(root->right)
        {
            node* temp = root->right;
            while(temp->left)
                temp = temp->left;

            return temp;
        }
        
        return prev; 
    }

    if(n < root->data)
    {
        prev = root;  
        return inordersucc(root->left, n, prev);
    }
    else
    {
        return inordersucc(root->right, n, prev);
    }
}


node* del(node* root, int n)
{
    if(root == NULL) return NULL;

    if(n < root->data)
    {
        root->left = del(root->left, n);
        return root;
    }
    else if(n > root->data)
    {
        root->right = del(root->right, n);
        return root;
    }
    else
    {
        
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        if(root->left == NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }
        if(root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }

        
        node* succ = root->right;
        while(succ->left)
            succ = succ->left;

        root->data = succ->data;   
        root->right = del(root->right, succ->data);
        return root;
    }
}



int main()
{
    node*prev=NULL;
    node*root=NULL;
    root=buildtree(root);
    display(root);
    root=insert(root, 8);
    display(root);
}