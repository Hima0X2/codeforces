#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,a,b,c,d;
cin>>t;
while(t--){
     cin>>a>>b;
     if(a==b){
         cout<<"0 0\n";
     }
     else{
       cout<<abs(a-b)<<" "<<min(a%abs(a-b),abs(a-b)-a%abs(a-b))<<endl;
     }
}
}


