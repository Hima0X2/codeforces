#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,a,b;
cin>>t;
while(t--){
     cin>>a>>b;
     if(__gcd(a,b)==1){
          cout<<"Finite\n";
     }
     else{
          cout<<"Infinite\n";
     }
}
}


