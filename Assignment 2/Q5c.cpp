#include<iostream>
using namespace std;
int main()
{
    int a[100],i,j,n,k;
    cout<<"enter the index of the Lower triangular matrix:\n";
    cin>>n;
    cout<<"enter the elements into the matrix diagonal wise:\n";
    for(i=0;i<n*(n+1)/2;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           
            if(j<=i)
            {
                
            }
            else{
                cout<<"0\t";
            }
            
        }
        cout<<endl;
    }

}
