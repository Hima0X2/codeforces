#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b,t,n,i,s=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
   scanf("%d",&t);
   if(t==1||t==0)
   {
        printf("0\n");
   }
   for(a=2,b=(t-1);a>b;a++,b--)
   {
        s++;
        printf("%d\n",s);
   }
 }
 return 0;
}

