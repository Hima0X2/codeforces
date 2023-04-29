#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,p=100;
     cin>>t;
     while(t--){
          cin>>n;
          i=__gcd(p,n);
          cout<<100/i<<endl;
     }
}

