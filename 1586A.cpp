/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
bitset<mx> is_prime;
vector<int> prime;
bool isprime(int n){
     int i,j;
     for(i=2;i*i<=n;i++){
          if(n%i==0){
               return false;
          }
     }
     return true;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     be:
     while(t--){
               bool ok;
               long long int sum=0;
 cin>>n;
 long long int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
     sum=sum+a[i];
 }
     if(!isprime(sum)){
    cout<<n<<endl;
    for(int j= 1; j <= i;j++) {
          cout<<j<<" ";}
    cout<<endl;
    goto be;
   }
   for(i=0;i<n;i++){
       if(!isprime(sum-a[i])){
    cout<<n-1<<endl;
    for(int j= 0; j <n;j++) {
          if(a[j]==a[i]){
               continue;
          }
          cout<<j+1<<" ";
          }
          cout<<endl;
          goto be;
   }
 }
 }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




