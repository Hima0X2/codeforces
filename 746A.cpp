#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long a,b,c,d,e,f,sum=0,i;
     cin>>a>>b>>c;
     for(i=1;;i++){
     d=i;
     e=2*i;
     f=4*i;
     if(d<=a&&e<=b&&f<=c){
        sum=d+e+f;
     }
     else{
          break;
     }
     }
     cout<<sum<<endl;
}
