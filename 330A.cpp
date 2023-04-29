#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n;
    cin>>m>>n;
    int s[1000][1000];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>s[i][j];
        }
    }
 for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
             if(s[i][j]=='s')
             {
                  break;
             }
        }
    }
}
