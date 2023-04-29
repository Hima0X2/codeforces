#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,t,k,m,n,c=1;
     cin>>t;
     for(i=0;i<t;i++)
     {
          cin>>m>>n;
          if(m==1||m==2)cout<<1<<endl;
          else
          {
             for(k=0;k<=n;k++)
             {
                  if((k*n+3)<=m||((k+1)*n+2)>=m)
                  {
                       c++;
                  }
                 //else{break;}
             }
             cout<<c<<endl;
             c=1;
     }
}
}
