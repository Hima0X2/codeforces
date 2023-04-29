#include<bits/stdc++.h>
using namespace std;

int main()
{
     int i,n,b=0,c=0,a[1000],d[1000];
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
          scanf("%d%d",&a[i],&d[i]);
          if(a[i]>d[i])
          {
               b++;
          }
          else if(a[i]<d[i]){c++;}
     }
   //cout<<b<<endl;
   //  cout<<c<<endl;
     if(b>c)printf("Mishka\n");
     else if(b<c)printf("Chris\n");
     else printf("Friendship is magic!^^\n");
     return 0;
}
