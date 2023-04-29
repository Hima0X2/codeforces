/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     if(p%2) return ((b*pw(b,p-1)));
     else{
          long long int k=pw(b,p/2);
          return ((k*k));
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
cin>>n;
long long int one=0,zero=0,a;
for(i=0;i<n;i++){
     cin>>a;
    if(a==1){
     one++;
    }
    else if(a==0){
     zero++;
    }
}
cout<<one*(pw(2,zero))<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




