#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,a,b,i;
cin>>t;
while(t--){
          long long int c=0;
          cin>>a>>b;
          long long int x=log10(b)+1;
          for(i=9;i<=b;i=i*10+9){
               c++;
          }
cout<<a*c<<endl;
}
}


