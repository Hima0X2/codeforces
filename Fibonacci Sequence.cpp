;/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e9+7;
map<long long int,long long int> F;
long long int fact(long long int n){
     if(F.count(n)){
          return F[n];
     }
     long long int k=n/2;
     if(n%2==0){
         return F[n] = (fact(k)*fact(k) + fact(k-1)*fact(k-1)) % mx;
	} else {
		return F[n] = (fact(k)*fact(k+1) + fact(k-1)*fact(k)) % mx;
	}
}
int main()
{
     optimize();
     F[0]=F[1]=1;
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
     if(n==0){
          cout<<0<<endl;
     }
     else{
          cout<<fact(n-1)<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




