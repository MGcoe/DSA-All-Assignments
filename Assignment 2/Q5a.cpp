#include <iostream>
using namespace std;
int main() {
   int a[100], b, c, i, j, n;
    cout<<"enter the number of elements into the diagonal matrix:\n";
    cin>>n;
    cout<<"enter elements into the array:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<"\t";
            }
            else
            {
                cout<<"0\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}