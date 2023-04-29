/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    long long int t,i,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        string s;
        cin>>s;
        int d=0;
        for(i=0; i<k; i++)
        {
            if(s[i]=='W')
            {
                d++;
            }
        }
        int c=d;
        for(i=k;i<n;i++){
          if(s[i]=='W'){
               d++;
          }
          if(s[i-k]=='W'){
               d--;
          }
          c=min(d,c);
        }
        cout<<c<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




