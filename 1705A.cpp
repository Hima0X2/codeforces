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
     long long int t,i,n,x;
     cin>>t;
     while(t--){
cin>>n>>x;
bool ok=false;
for(i=0;i<2*n;i++){
     cin>>a[i];
}
sort(a,a+2*n);
for(i=n;i<2*n;i++){
        //  cout<<a[i]<<" "<<a[i-n]<<endl;
//cout<<abs(a[i]-a[i-(n/2)])<<endl;
    if(abs(a[i]-a[i-n])>=x){
     ok=true;
    }
    else{
     ok=false;
     break;
    }
}
if(ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



