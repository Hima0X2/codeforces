/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }

int main()
{
     optimize();
     long long int t,i,n,a,b,c;
     cin>>t;
     while(t--){
cin>>a>>b>>c;
if(a>b&&a>c){
     cout<<"0 "<<(a-b)+1<<" "<<(a-c)+1<<endl;
}
else if(a<b&&b>c){
     cout<<(b-a)+1<<" "<<"0 "<<(b-c)+1<<endl;
}
else if(c>a&&c>b){
      cout<<(c-a)+1<<" "<<(c-b)+1<<" 0"<<endl;
}
else{
     cout<<a+1<<" "<<b+1<<" "<<c+1<<endl;
}
     }
}
/// ALHAMDULILLAH



