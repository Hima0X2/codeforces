#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i,p,q) for(int i=p;i<q;i++)
#define vi vector<long long>v;
#define tc int t; cin>>t; while(t--)
//#define an long long n; cin>>n; long long a[n]; for(int i=0;i<n;i++) cin>>a[i];
int main()
{
	//freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long n,m,i,j,k,x,y,z,ans=0; string s,s1;
    bool flag;
    // tc{
    // }
    cin>>n; cin.ignore();
    cin>>s>>s1;
    for(i=0;i<n;i++)
    {
    	s[i]=48-s[i]; s1[i]=48-s1[i];
    	j=abs(s[i]-s1[i]);
    	k=10-max(s[i],s1[i])+min(s[i],s1[i]);
    	//cout<<j<<" "<<k<<endl;
    	ans+=min(j,k);
    }
    cout<<ans<<endl;

}
