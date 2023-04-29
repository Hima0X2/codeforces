/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
               bool flag=0;
    cin>>n;
    long long int f=1;
    for(i=3;i<=2*n;i++){//implicity divided by 2
          f=(f*i)%1000000007;
    }
    cout<<f<<endl;
     }
}
/// ALHAMDULILLAH




