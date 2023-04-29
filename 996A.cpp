#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i=0,n,p;
     cin>>n;
     while(n>0)
     {
          if(n>=100)
          {
          p=n%100;
          n=n-100;
          i++;
          }
          else if(n>=20)
          {
          p=n%20;
          n=n-20;
          i++;
          }
          else if(n>=10)
          {
          p=n%10;
          n=n-10;
          i++;
          }
          else if(n>=5)
          {
          p=n%5;
          n=n-5;
          i++;
          }
          else if(n>=1)
          {
                 p=n%1;
                n=n-1;
               i++;
          }
          else
          {
               break;
          }
     }
     cout<<i<<endl;
    return 0;
}
