#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,sum=0;
     int a[1000];
    scanf("%d",&n);
     for(i=0;i<n;i++)
     {
           scanf("%d",&a[i]);
          if(a[i]==1)
          {
               printf("HARD\n");
                return 0;
          }
     }

           printf("EASY\n");
           return 0;
}
