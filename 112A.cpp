#include<bits/stdc++.h>
using namespace std;
int main()
{
     char a[110],b[110],c[110],d[110];
     int i,j=0;
     cin>>a>>b;
     for(i=0;i<strlen(a);i++)
     {
          c[i]=tolower(a[i]);
     }
    for(i=0;i<strlen(b);i++)
     {
          d[i]=tolower(b[i]);
     }
      for(i=0;i<strlen(a);i++)
      {
            if(c[i]<d[i])
     {
         j=2;
         break;
     }
     else if(c[i]>d[i])
     {
           j=1;
            break;
     }
     else if(c[i]==d[i])
     {
           j=0;
     }

      }
      if(j==0)
      {
           cout<<"0";
      }
    else if(j==1)
    {
         cout<<"1";
    }
    else if(j==2)
    {
          cout<<"-1";
    }
}
