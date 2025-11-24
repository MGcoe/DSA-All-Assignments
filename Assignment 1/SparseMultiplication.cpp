#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "Enter number of rows in Matrix A: "<<endl;
    cin >> n;
    int A[n][3];
    cout << "enter values in A:\n";
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }

    cout << "Enter number of rows Matrix B: "<<endl;
    cin >> m;
    int B[m][3];
    cout << "Enter values in  B:\n";
    for (int i = 0; i < m; i++) 
    {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
    }

   
    
    int result[20][3] = {0};
int k=0;
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][1] == B[j][0]) {
                result[k][0]=A[i][0];
                result[k][1]=B[j][1];
                result[k][2]=result[k][2]+A[i][2]*B[j][2];
                k++;
            }
        }

    }

    for(int i=0;i<k;i++)
    {
        for(int j=i+1;j<k-1-i;j++)
        {
            if(result[i][0]==result[j][0]&&result[i][1]==result[j][1])
            {
                result[i][2]=result[i][2]+result[j][2];
                result[j][0]=0;
                result[j][1]=0;
                result[j][2]=0;
            }
        }
    }
   
    cout << "Result of Multiplication (triplet form):"<<endl;
    for (int i = 0; i <k; i++) {
        if(result[i][0]==0&&result[i][1]==0&&result[i][2]==0)
        continue;
        for (int j = 0; j <3; j++)
        {
                cout<<result[i][j]<<"\t";
        }
        cout<<endl;
        } 
    }


