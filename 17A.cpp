/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e6+123;
int a[mx];
vector<int> prime;
void Prime(int n){
     int i,j;
  for(i=4;i<n;i=i+2){
     a[i]=1;
}
for(i=3;i<sqrt(n);i=i+2){
     if(a[i]==0){
          for(j=i*i;j<n;j=j+(i+i)){
               a[j]=1;
          }
     }
}
a[0]=a[1]=1;
for(i=2;i<n;i++){
     if(a[i]==0){
          prime.push_back(i);
     }
}
}
 int gol( int n){
     int i=0,c=0;
//     for(int j=0;j<prime.size();j++){
//          cout<<prime[j]<<" ";
//
//     }
//     cout<<endl;
 int x=0;
  while(x<=n){
         x=prime[i]+prime[i+1]+1;
          if(x<=n&&a[x]==0){
                    //cout<<"Prime "<<x<<endl;
               c++;
          }
          i++;
}
return c;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
      int t,i,n,cnt,lim=1000,k;
     cin>>n>>k;
      Prime(lim);
     cnt=gol(n);
    //cout<<cnt<<endl;
if(cnt>=k){
     cout<<"YES\n";
}
else{
     cout<<"NO\n";
}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
