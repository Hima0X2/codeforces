/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int sum=0;
     cin>>n;
     string s;
     cin>>s;
      for(i=0;i<n-1;i++){
          if(s[i]!='0'){
               sum=sum+(s[i]-'0')+1;
          }
      }
      if(s[n-1]!='0'){
        sum=sum+(s[i]-'0');
      }
      cout<<sum<<endl;
     }
}
/// ALHAMDULILLAH




