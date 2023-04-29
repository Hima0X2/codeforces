/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx =1e6+123;
long long int phi[mx],sum[mx],p[mx];
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,j,i,n;
    long long int lim=1e6;
     for(i=1;i<=lim;i++){
          phi[i]=i;
     }
     for(i=2;i<=lim;i++){
          if(phi[i]==i){
               for(j=i;j<=lim;j=j+i){
                     phi[j]=phi[j]*(i-1);
                      phi[j]=phi[j]/i;
               }
          }
     }
     for(i=1;i<=lim;i++){
          for(j=i;j<=lim;j=j+i){
               p[j]=p[j]+(i*phi[j/i]);
          }
     }
     sum[0]=0;
     for(i=1;i<=lim;i++){
          sum[i]=sum[i-1]+p[i]-i;
     }
     while(1){
cin>>t;
if(t==0){
     break;
}
cout<<sum[t]<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




