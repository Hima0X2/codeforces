#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
     int x,i,c=1;
     cin>>a;
          x=strlen(a);
          sort(a,a+x);
          for(i=1;i<x;i++)
          {
               if(a[i-1]!=a[i])
               {
                    c++;
               }
          }
         if(c%2==0)
         {
          cout<<"CHAT WITH HER!"<<endl;
         }
         else
         {
              cout<<"IGNORE HIM!"<<endl;

         }
     return 0;
}
