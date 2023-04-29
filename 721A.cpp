#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,y,n;
     cin>>x>>y>>n;
     int z=abs(x-y);
     if(z==0)cout<<1<<endl;
    else if(z%2!=0){
          cout<<1<<endl;
     }
     else{
           cout<<0<<endl;
     }
}
