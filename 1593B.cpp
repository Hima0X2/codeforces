/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int check(string s,string p){
     int x=0,y=s.size();
while(s.size()>0&&p.size()>0){
          if(s.back()==p.back()) {
            p.pop_back();
          }
          else{
               x++;
          }
     s.pop_back();
}
if(p.size()==0){
          return x;
     }
return y;
}
int main()
{
     optimize();
    long long int t,i,n;
     cin>>t;
     while(t--){
               string s;
      cin>>s;
     if(s.size()==1){
          cout<<1<<endl;
     }
     else{
      cout<<min(check(s,"25"),min(check(s,"50"),min(check(s,"75"),check(s,"00"))))<<endl;
     }
     }
}
/// ALHAMDULILLAH




