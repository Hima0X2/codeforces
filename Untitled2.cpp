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
     long long int t,i,n,sum=0,k=5;
     cin>>n;
int result = 0;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     if(n<5){
          cout<<0<<endl;
     }
     else if(n==5){
               sum=a[0]+a[1]+a[2]+a[3]+a[4];
          if(sum%5==0){
               cout<<1<<endl;
          }
          else{
               cout<<0<<endl;
          }
     }
     else{
           long long int mod[k];
    int cumSum = 0;
    for (int i = 0; i < n; i++) {
        cumSum += a[i];
        mod[((cumSum % k) + k) % k]++;
    }
    for (int i = 0; i < k; i++){
        if (mod[i] > 1){
            result += (mod[i] * (mod[i] - 1)) / 2;
        }
    }
    result += mod[0];
     }
cout<<result<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



