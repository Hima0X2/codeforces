#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x[5],i,a,b,c;
     for(i=0;i<4;i++){
          cin>>x[i];
     }
     sort(x,x+4);
     a=x[3]-x[2];
     b=x[3]-x[1];
     c=x[3]-x[0];
     cout<<a<<" "<<b<<" "<<c<<endl;
}
