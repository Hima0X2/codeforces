#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int i,j,t,n;
     cin>>t;
     while(t--){
               long long int ans=0;
          cin>>n;
          string s,q;
          cin>>s>>q;
          for(i=0;i<n;i++){
                    if(q[i]=='1'){
              if(s[i]=='0'){
               ans++;
               q[i]='0';
              }
             if(i!=0&&s[i-1]=='1'&&q[i]=='1'){
                    s[i-1]='0';
               q[i]='0';
                ans++;
             }
             else if(i!=(n-1)&&s[i+1]=='1'&&q[i]=='1'){
               q[i]='0';
               s[i+1]='0';
                ans++;
             }
          }
          }
          cout<<ans<<endl;
     }
     }

