#include<bits/stdc++.h>
using namespace std;
int main()
{
    double i,t,n,c0,c1,h,c=0,d=0,sum1,sum,sub;
    string s;
    cin>>t;
    while(t--){
     cin>>n>>c0>>c1>>h;
     cin>>s;
     for(i=0;i<n;i++)
     {
       if(s[i]=='0')
     {
          c++;
     }
       else{d++;}
     }
     sum1=c*c0+d*c1;
	sub=n*c0+h*d;
	sum=n*c1+ h*c;
cout<<min(sub,min(sum,sum1))<<endl;
	c=0;
	d=0;
    }
}
