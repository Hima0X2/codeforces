#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0;
     string a;
      scanf("%d",&n);
           cin>>a;
     for(i=0;i<n-1;i++)
     {
              if(a[i]==a[i+1])
              {
                   c++;
              }
     }
     printf("%d\n",c);
     return 0;
}
