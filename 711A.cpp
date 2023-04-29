#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,c=0,d=0,j;
    char s[1000][1000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            cin>>s[i][j];
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<5; j++)
        {
            if(s[i][j]=='O'&&s[i][j+1]=='O')
            {
                c++;
                s[i][j]='+';
                s[i][j+1]='+';
                goto lol;
            }
        }
    }
    lol:
    if(c==0)
        cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
        {
            for(j=0; j<5; j++)
            {
                cout<<s[i][j];
            }
            cout<<endl;
        }
    }
}
