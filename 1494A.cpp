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
     long long int t,i,n;
     cin>>t;
     be:
     while(t--){
               int a=0,b=0,c=0,x,y;
       string s;
       cin>>s;
            int len=s.size();
       for(i=0;i<len;i++){
          if(s[i]=='A')a++;
          else if(s[i]=='B')b++;
          else if(s[i]=='C')c++;
       }
          if(a==b+c)
	{
		for(i=0;i<len;i++)
		{
			if(s[i]=='C')s[i]='B';
		}
	}
	else if(b==a+c)
	{
		for(i=0;i<len;i++)
		{
			if(s[i]=='C')s[i]='A';
		}
	}
	else if(c==b+a)
	{
		for(i=0;i<len;i++)
		{
			if(s[i]=='A')s[i]='B';
		}
		for(i=0;i<len;i++)
		{
			if(s[i]=='C')s[i]='A';
		}
	}
	else {
               cout<<"NO\n"; goto be;
     }
     int p=1;
     bool ok=false;
     if(s[0]=='A'){
          ok=true;
     }
   for(i=1;i<len;i++){
          if(ok){
     if(s[i]=='A'){
          p++;
     }
     else{
          p--;
          if(p<0){ cout<<"NO\n"; goto be;
          }
     }
          }
          else{
 if(s[i]=='B'){
          p++;
     }
     else{
          p--;
          if(p<0){ cout<<"NO\n"; goto be;
          }
     }
          }
   }
   if(p!=0){
     cout<<"NO\n";
   }
   else{
     cout<<"YES\n";
   }
       }
}
/// ALHAMDULILLAH



