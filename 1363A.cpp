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
     long long int t,n,x,i;
     cin>>t;
     while(t--){
               bool flag=true;
               long long int c=0,d=0;
          cin>>n>>x;
          for(i=0;i<n;i++){
               cin>>a[i];
     if(a[i]%2){
          c++;
     }
     else{
          d++;
     }
          }
         for (i=1; i<=c; i+=2)
	{
		long long int ans=x-i;
		if (ans>=0 && ans<=d)
		{
			cout<<"Yes\n";
			flag=false;
			break;
		}
	}
	if(flag){
	cout<<"No\n";
	}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

