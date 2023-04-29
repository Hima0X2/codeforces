/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int n,i,sum,j,max,min;
     cin>>n;
     vector<long long int> v;
     for(i=0;i<n;i++){
          cin>>a[i];
          v.push_back(a[i]);
     }
     sort(a,a+n);
    sum=a[n-1]+a[0];
     for(i=0;i<n;i++){
       for(j=0;j<n;j++)
        {
if(v[j]+v[i]==sum&&i!=j){
     cout<<i+1<<" "<<j+1<<endl;
     v[i]=0;
     v[j]=0;
}
        }
          }
}
/// ALHAMDULILLAH


