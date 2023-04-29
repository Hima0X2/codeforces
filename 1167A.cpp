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
     while(t--){
               bool ok=false;
               long long int c=0;
  cin>>n;
     string s;
     cin>>s;
     for(i=0;i<n;i++){
        if(s[i]=='8'){
               c=(n-i);
        ok=true;
          break;
        }
     }
       if(ok&&c>=11){
          cout<<"YES\n";
       }
       else{
          cout<<"NO\n";
       }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




