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
     long long int p=n/3;
     if(p*3==n){
          cout<<p<<" "<<p<<endl;
     }
     else{
               if((p+1)+2*p==n){
          cout<<p+1<<" "<<p<<endl;
               }
               else{
                  cout<<p<<" "<<p+1<<endl;
               }
     }
}
}


