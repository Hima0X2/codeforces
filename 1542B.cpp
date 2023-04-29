#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int t,n,a,b,i,m,p,z;
cin>>t;
hi:
while(t--){
          z=1;
     cin>>n>>a>>b;
     if(a==1) {
		if((n-1)%b == 0){
                    cout << "Yes\n";
          }
		else{
                    cout << "No\n";
          }
          goto hi;
	}
     i=1;
    while(i<=n){
          m=i*a;//1,1
          p=i+b;//5
          //cout<<m<<" "<<p<<endl;
          if((n-i)%b==0){
               cout<<"Yes\n";
               z=0;
               break;
          }
          i=i*a;//1
     }
     if(z){
         cout<<"No\n";
     }
}
}

