#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long  a,b,c=0,p=1,i;
     cin>>a>>b;
     for(i=0;p<b;i++){
          p=p*a;
          if(p==b){
          cout<<"YES\n";
          cout<<i<<endl;
          return 0;
     }
     }
     cout<<"NO\n";
}
