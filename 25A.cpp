#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a[100],j=0,k=0,x,y;
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
          scanf("%d",&a[i]);
     }
     for(i=1;i<=n;i++)
     {
           if(a[i]%2==1)
           {
                j++;
                x=i;
           }
           else
           {
                k++;
                y=i;
           }
     }
     if(k==1) printf("%d\n",y);
     else if(j==1) printf("%d\n",x);
     return 0;
}
