#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i, n, j, c=1;
    string str;
    cout<<"enter a string:\n";
    cin>>str;
    n=str.length();
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          if(str[i]==str[j])
            
          {
            for (int k = j; k < n - 1; k++) {
                    str[k] = str[k + 1];
                }
                
                n--;
                str.resize(n);

            }
            
        }
    }
    cout<<"the number of distinct elements in the string is given as: "<<n<<endl;
}