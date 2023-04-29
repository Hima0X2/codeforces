#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n;
cin>>t;
while(t--){
     cin>>n;
     long long int sum=0,x=1,c=0;
     while(sum<n){
          sum=sum+x;
          c++;
          x=x+2;
          cout<<x<<" ";
     }
     cout<<c<<endl;
}
}


