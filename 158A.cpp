#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,a[100],i,c=0;
     scanf("%d",&n);
     scanf("%d",&k);
     for(i=0;i<n;i++)
     {
          scanf("%d",&a[i]);
          //if(a[i]>k)c++;
     }
     int m=a[k-1];

    for(i=0;i<n;i++)
    {
         // if(a[i]==0)c=0;
             if(a[i]>0&&a[i]>=a[k-1])
    {
           c++;
    }
    }
     printf("%d\n",c);
     return 0;
}
