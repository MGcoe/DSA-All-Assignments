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
    
    cout<<"enter the data for node: "<<endl;
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }

    root=new node(d);
    cout<<"enter data for left node: "<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for the right node: "<<endl;
    root->right=buildtree(root->right);
    return root;

}

void display(node* root)
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
        else{
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

node* search(int s, node* root)
{
    if (root==NULL)
    {
        return NULL;
    }
    if(s == root->data)
    {
        return root;
    }
    else if(s < root->data)
    {
        return search(s, root->left);
    }
    else
    {
        return search(s, root->right);
    }
}


int main()
{
    node* root= NULL;
    root= buildtree(root);//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    display(root);
    node* res=search(2, root);
    if(res)
        cout << "Found: " << res->data << endl;
    else
        cout << "Not found!" << endl;
}
