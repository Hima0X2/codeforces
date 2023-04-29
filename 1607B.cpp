/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int pw(long long int x,long long int n){
     if(n%4==0){
         return x;
     }
     else if(n%4==2){
          return x+1;
     }
     else if(n%4==3){
    return pw(x,n-1)+n;
     }
     else{
      return pw(x,n-1)-n;
     }
}
long long int pw1(long long int x,long long int n){
     if(n%4==0){
         return x;
     }
     else if(n%4==2){
          return x-1;
     }
     else if(n%4==3){
    return pw1(x,n-1)-n;
     }
     else{
      return pw1(x,n-1)+n;
     }
}
int main()
{
    optimize();
    long long int t,i,n,mn,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
if(x%2){
cout<<pw1(x,n)<<endl;
}
else{
cout<<pw(x,n)<<endl;
}
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
