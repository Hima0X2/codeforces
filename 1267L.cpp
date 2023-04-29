/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int n,l,i,k,p,j=0;
     string s;
     cin>>n>>l>>k;
     cin>>s;
     sort(s.begin(),s.end());
     cout<<s<<endl;
     for(i=0;i<n;i++){
          //cout<<s[i];
          j=0;
     p=(l-1);
          while(p--){
           cout<<s[n-i+j+2];
           j++;
          }
          cout<<endl;
     }
}
/// ALHAMDULILLAH




