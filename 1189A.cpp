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
    long long int t,i,n,one=0,zero=0,c=0,d=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
if(zero!=one){
     cout<<1<<endl;
     cout<<s<<endl;
}
else{
     cout<<2<<endl;
     for(i=0;i<one;i++){
               if(s[i]=='1'){
                    c++;
               }
               else{
                    d++;
               }
          cout<<s[i];
     }
     if(c==d){
          cout<<s[i];
          i++;
     }
     cout<<" ";
      for(;i<n;i++){
          cout<<s[i];
     }
     cout<<endl;
}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




