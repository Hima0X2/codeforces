/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,x1,x2,y1,y2;
    cin>>t;
    while(t--)
    {
         long long int c=0,d=0;
        cin>>x1>>y1>>x2>>y2;
          if(x1==0&&x2==0&&y1==0&&y2==0){
               cout<<0<<endl;
          }
          else if(x1==1&&x2==1&&y1==1&&y2==1){
               cout<<2<<endl;
          }
          else{
          cout<<1<<endl;
          }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




