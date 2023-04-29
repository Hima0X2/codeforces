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
long long int b[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,x;
     cin>>t;
     while(t--){
               vector<long long int> a;
     cin>>n;
     for(i=1;i<=n;i++){
          cin>>x;
          a.push_back(x);
          b[i]=i;
     }
     if(n==1){
          cout<<-1<<endl;
          continue;
     }
     for(i=1;i<n;i++){
          if(a[i-1]==b[i]){
               swap(b[i],b[i+1]);
          }
     }
     if(b[n]==a[n-1]){
          swap(b[n],b[n-1]);
     }
    for(i=1;i<=n;i++){
         cout<<b[i]<<" ";
    }
    cout<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




