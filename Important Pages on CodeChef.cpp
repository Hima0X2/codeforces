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
     long long int t,i,n,a,b;
     cin>>a>>b;
    if(a==0&&b==1){
     cout<<"https://www.codechef.com/practice\n";
    }
    else if(a==1&&b==0){
     cout<<"https://www.codechef.com/contests\n";
    }
    else  if(a==0&&b==0){
     cout<<"https://www.codechef.com/practice\n";
    }
    else{
     cout<<"https://discuss.codechef.com\n";
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




