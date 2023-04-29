/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string s,z="";
        char x='z';
        long long int m=n;
        n=n-2;
      while(n--){
          cin>>s;
          if(s[0]!=x){
           //cout<<x<<endl;
             z=z+s;
          }
          else{
           z=z+s[1];
          }
           x=s[1];
      }
      n=n+2;
     // cout<<z.size()<<" "<<n<<endl;
      while(z.size()<m){
          z=z+s[1];
       }
       cout<<z<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




