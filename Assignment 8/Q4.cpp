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
    cout<<"enter data to the node: "<<endl;
    int d;
    cin>>d;
    root=new node(d);
    if(d==-1)
    {
        return NULL;
    }
    else{
        cout<<"enter data to left: "<<endl;
        root->left=buildtree(root->left);

        cout<<"enter data to the right: "<<endl;
        root->right=buildtree(root->right);

        return root;
    }
    
}

void display(node* root)
{
    queue<node*>q;
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
bool isbst(node* root, int min, int max)
{
    if (root==NULL)
    {
        return true;
    }
    if(root!=NULL&&root->data>=max)
    {
        return false;
    }
    if(root!=NULL&&root->data<=min)
    {
        return false;
    }
    return isbst(root->left, min, root->data)&&
    isbst(root->right, root->data, max);
}
int main()
{
    node* root=NULL;
    root=buildtree(root);
    display(root);
    if (isbst(root, INT_MIN, INT_MAX)==true)
    {
        cout<<"the tree is a valid BST"<<endl;
    }
    else
    cout<<"the tree isn't a valid BST"<<endl;

}
