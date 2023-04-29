#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s;
    t=s;
    int n=s.length();
    int i,j,c=0;
    if(s[0]>='a'&&s[0]<='z')
    {
        t[0]=toupper(s[0]);
        for(i=1; i<n; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                t[i]=tolower(s[i]);
            }
            else
            {
                cout<<s<<endl;
                return 0;
            }
        }
    }
    else{
     for(i=0; i<n; i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                t[i]=tolower(s[i]);
            }
            else
            {
                cout<<s<<endl;
                return 0;
            }
        }
    }
    cout<<t<<endl;
}
