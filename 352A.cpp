#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n,j,i=0,sum=0;
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
reverse(a,a+n);
for(i=n-1;i>=0;i--){
     sum=sum+a[i]*pow(10,i);
     if(sum%90==0){
          cout<<sum<<endl;
          return 0;
     }
}
//cout<<sum<<endl;
cout<<0<<endl;
}
