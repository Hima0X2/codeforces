#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n,i;
cin>>t;
string s;
while(t--){
          map<long long int,string> mp;
     cin>>s;
     long long int p=s.length(),c=0;
     if(p==1){
          cout<<0<<endl;
          continue;
     }
     for(i=0;i<50;i++){
               a[i]=0;
     }
     for(i=0;i<p;i++){
          a[s[i]-'a']++;
           if(a[s[i]-'a']<3){
               c++;
          }
     }
     cout<<c/2<<endl;

}
}


