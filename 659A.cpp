#include<bits/stdc++.h>
using namespace std;
int main()
{
     double n,a,b,i,c=0;
     cin>>n>>a>>b;
     if(b==0)cout<<a<<endl;
     else if(b>0){
     for(i=a;i<=n;i++){
          c++;
          if(n==1){cout<<n<<endl;return 0;}
          if(i==n)i=1;
          if(c==b)
          {
               break;
          }
     }
     cout<<i<<endl;
}
else{
      for(i=a;i>=1;i--){
          c++;
          if(i==1)i=n;
          if(c==abs(b))
          {
               break;
          }
     }
     cout<<i<<endl;
}
}
