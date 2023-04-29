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
    int t,i,n,j;
    cin>>t;
    while(t--)
    {
         cin>>n;
       map<string,int>mp;
       string k="";
		string s[n+5];
		for(i=0;i<n;i++){
			cin>>s[i];
			mp[s[i]]++;
		}
		for(i=0;i<n;i++){
			int x=s[i].size();
			int ok=0;
			for(j=1;j<x;j++){
				if(mp[s[i].substr(0,j)]>0 && mp[s[i].substr(j,x-j)]>0){
					ok=1;
					break;
				}
			}
			if(ok)k+='1';
			else k+='0';
		}
		cout<<k<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




