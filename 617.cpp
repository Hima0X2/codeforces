#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,k=0,c=1,i;
     scanf("%d",&x);
     for(i=1;i<=x;i++)
     {
          k++;
          if(k==6)
          {
               c++;
          k=1;
          }
     }
     printf("%d\n",c);
     return 0;
}
