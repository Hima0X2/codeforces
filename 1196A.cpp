#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,n,t;
     cin>>t;
     while(t--){
          cin>>a>>b>>c;
          n=(a+b+c);
          if(n%2==0)
          {
                cout<<n/2<<endl;
          }
          else{
                cout<<(n-1)/2<<endl;
          }

     }
}
