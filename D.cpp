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
     long long int t,i,n;
     cin>>t;
     while(t--){
cin>>n;
string a,b;
cin>>a;
cin>>b;
map<long long int,char> mp;
vector<char> s1;
vector<char> s2;
int d=0;
for(i=0;i<n;i++){
   if(a[i]!=b[i]){
     s1.push_back(a[i]);
     s2.push_back(b[i]);
   }
}
if(s1.size()==1||s2.size()==1){
     cout<<"No\n";
}
else if((s1[0]==s1[1])&&(s2[0]==s2[1])&&s1.size()==2){
cout<<"Yes\n";
}
else{
     cout<<"No\n";
}
}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




