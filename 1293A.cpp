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
     long long int t;
     cin>>t;
     while(t--){
               map<long long int,long long int> mp;
   long long int n,s,k,i,j,c=0,a;
   cin>>n>>s>>k;
   for(i=0;i<k;i++){
     cin>>a;
     mp[a]=2;
   }
   if(mp[s]!=2){
     cout<<0<<endl;
     continue;
   }
   for(i=s+1,j=s-1;(i<=n||j>=1);i++,j--){
        c++;
       if ((i<=n && mp[i] != 2) || (j>=1 && mp[j] != 2))
			{
				break;
			}
   }
   cout<<c<<endl;
}
}
/// ALHAMDULILLAH




