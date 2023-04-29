#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,w,h,n,t,sum=0;
     cin>>t;
     while(t--){
          cin>>w>>h>>n;
         while(w%2==0)
	{
		w=w/2;
		sum++;
	}
	int s=pow(2,sum);
	sum=0;
	while(h%2==0)
	{
		h=h/2;
		sum++;
	}
	int z=pow(2,sum);
	if(s*z >= n)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	sum=0;
     }
}
