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
    long long int t,i,n;
    cin>>t;
    string a,b;
    while(t--)
    {
         int c=0;
        cin>>a;
        cin>>b;
       for(i=0;i<b.size();i++){
          if(b[i]=='a'){
               c++;
          }
       }
       if(b=="a"){
          cout<<1<<endl;
        }
       else if(c>=1){
          cout<<-1<<endl;
       }
        else{
               int n=a.size();
          cout<<(long long int)pow(2,n)<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



