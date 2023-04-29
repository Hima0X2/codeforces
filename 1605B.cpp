/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
               vector<long long int> a;
               long long int j=0,c=0;
cin>>n;
string s,t;
cin>>s;
t=s;
if(is_sorted(s.begin(),s.end())){
     cout<<0<<endl;
     continue;
}
cout<<1<<endl;
sort(s.begin(),s.end());
for(i=0;i<s.size();i++){
     if(s[i]!=t[i]){
          c++;
          a.push_back(i+1);
     }
}
cout<<c<<" ";
for(i=0;i<a.size();i++){
cout<<a[i]<<" ";
}
cout<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




