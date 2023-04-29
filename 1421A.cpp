/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
     optimize();
     long long int t,i,a,b,x,y;
     cin>>t;
     while(t--){
               long long int m,n,cnt=1,ans=0;
        cin>>a>>b;
     m=a;
     n=b;
        while(a!=0||b!=0){
          if((a&1)&&(b&1)){
               ans=ans|cnt;
          }
          a=a/2;
          b=b/2;
          cnt=cnt<<1;
        }
        cout<<((m^ans)+(n^ans))<<endl;
     }
}
/// ALHAMDULILLAH



