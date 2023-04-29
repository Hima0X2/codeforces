/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
//bool hi(long long int j,long long int n,long long int a[][5]){
//long long int i,c=0,d=0;
//for(i=2;i<n;i=i+2){
//     if(a[i][j]==a[i-2][j]){
//if(a[i][j]==0){
//     return false;
//}
//else{
//     c++;
//}
//}
//}
//for(i=3;i<n;i=i+2){
//     if(a[i][j]==a[i-2][j]){
//if(a[i][j]==0){
//     return false;
//}
//else{
//     d++;
//}
//     }
//}
//if((c==(n/2)-1||d==(n/2)-1)&&c!=d){
//     return true;
//}
//return false;
//}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,j;
     cin>>t;
     while(t--){
               long long int x=0,y=0;
               bool ok=false;
               vector<long long int> v[10];
cin>>n;
long long int a;
for(i=0;i<n;i++){
     for(j=0;j<5;j++){
          cin>>a;
          if(a==1){
               v[j].push_back(i);
          }
     }
}
for(i=0;i<5;i++){
     if(v[i].size()>=n/2){
          for(j=i+1;j<5;j++){
               if(v[j].size()>=n/2){
                set<long long int> s;
                for(auto u:v[i]){
                    s.insert(u);
                }
                  for(auto u:v[j]){
                    s.insert(u);
                }
                if(s.size()==n){
                    ok=true;
                    goto be;
                }
               }
          }
     }
}
be:
if(ok){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




