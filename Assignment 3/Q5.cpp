#include<iostream>
#include<string>
#include<stack>
using namespace std;
int i;
string inf, output;
stack<string> st;
int main()
{
    cout<<"enter a valid postfix: "<<endl;
    cin>>inf;

    
    for(i=0;i<inf.length();i++)
    {
        string c(1,inf[i]);

        if(c!="^" && c!="*" && c!="/" && c!="+" && c!="-" && c!="(" && c!=")")
        st.push(c);

        else{
        string o2, o1;
        o2=st.top();
        st.pop();
        o1=st.top();
        st.pop();
        output="("+o1+c+o2+")";
        st.push(output);
        }
    }
    

    cout<<st.top()<<endl;
}
