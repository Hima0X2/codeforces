#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d,i,sum,sub;
          cin>>a>>b>>c>>d;
     if((a+b==c+d)||(a+c==b+d)||(a+d==b+c)||(a+b+c==d)||(b+c+d==a)||(a+c+d==b)||(a+b+d==c)){
          cout<<"YES"<<endl;
     }
     else{
          cout<<"NO"<<endl;
     }
}
