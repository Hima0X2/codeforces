/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n,a;
     cin>>t;
     while(t--){
cin>>n;
vector<long long int> v;
for(i=0;i<n;i++){
     cin>>a;
     v.push_back(a);
}
 int c=0,i,j;
     while (!is_sorted(v.begin(),v.end())){
               bool flag=true;
	for(i=1;i<n;i=i+2){
          if(v[i]<v[i-1]){
               swap(v[i],v[i-1]);
          }
	}
          c++;
	if(is_sorted(v.begin(),v.end())){
    break;
    }
	for(i=2;i<n;i=i+2){
          if(v[i]<v[i-1]){
               swap(v[i],v[i-1]);
               flag=false;
          }
	}
          c++;
     }
cout<<c<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



