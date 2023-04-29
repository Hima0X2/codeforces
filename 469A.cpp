#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,p,q,a[1000],b[1000],i,c=0,j;
     scanf("%d",&n);
     scanf("%d",&p);
     for(i=0;i<p;i++)
     {
        scanf("%d",&a[i]);
     }
      scanf("%d",&q);
     for(i=i;i<(p+q);i++){
                  scanf("%d",&a[i]);
     }
     for(j=1;j<=n;j++)
     {
          for(i=0;i<(p+q);i++)
          {
               if(j==a[i])
               {
                    c++;
                    break;
               }
          }
     }
     //cout<<c<<endl;
     if(c==n){printf("I become the guy.\n");}
    else{printf("Oh, my keyboard!");}
     return 0;
}
