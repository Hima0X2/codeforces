#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            int z=i/2;
            if(i%2==0)
            {
                cout<<"#";
            }
            else if(z%2==0)
            {
                if(j==m-1)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else if(z%2!=0)
            {
                if(j==0)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
        }
        cout<<endl;
    }
}
