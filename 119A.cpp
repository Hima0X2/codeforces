#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,z;
     cin>>x>>y>>z;
     while(1){
      z=z-__gcd(x,z);
      if(z==0){
          cout<<"0"<<endl;
          break;
      }
        z=z-__gcd(y,z);
      if(z==0){
          cout<<"1"<<endl;
          break;
      }
     }
}
