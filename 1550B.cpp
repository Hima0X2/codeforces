#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n,a,b,i;
string s;
cin>>t;
while(t--){
     cin>>n>>a>>b;
     cin>>s;
     long long int c=1;
     for(i=1;i<s.size();i++){
          if(s[i]!=s[i-1]){
               c++;
          }
     }
     if(b<0){
          cout<<a*n+b*(c/2+1)<<endl;//(c/2+1)=operation songkha
     }
     else{
          cout<<(a+b)*n<<endl;
     }
}
}


