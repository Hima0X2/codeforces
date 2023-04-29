/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,c=0,sum,j,k,l,m;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=0;i<n;i++){
               sum=0;
         for(j=i+1;j<n;j++){
             for(k=j+1;k<n;k++){
               for(l=k+1;l<n;l++){
                    for(m=l+1;m<n;m++){
                         sum=a[i]+a[j]+a[k]+a[l]+a[m];
                         if(sum%5==0){
                              c++;
                         }
                    }
               }
             }
         }
     }
     cout<<c<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




