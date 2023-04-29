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
     long long int i,n;
   string s,t="";
   cin>>s;
   for(i=0;i<s.size();i++){
     if(s[i]=='a'){
          t=t+"4";
     }
     else if(s[i]=='i'){
          t=t+"1";
     }
     else if(s[i]=='e'){
          t=t+"3";
     }
      else if(s[i]=='o'){
          t=t+"0";
     }
     else if(s[i]=='s'){
          t=t+"5";
     }
     else{
          t=t+s[i];
     }
   }
   cout<<t<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




