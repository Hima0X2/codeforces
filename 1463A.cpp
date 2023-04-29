#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,a,b,c;
    cin>>t;
    while(t--){
     cin>>a>>b>>c;
int s=a+b+c;
if((s%9==0) && (s/9<=a) && (s/9<=b) && (s/9<=c) ){
 cout<<"YES"<<endl;}
else{cout<<"NO"<<endl;}
    }
}
