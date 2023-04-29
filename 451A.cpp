#include<bits/stdc++.h>
using namespace std;
int main()
{
     int m,n,i=0,count=0;
     cin>>m>>n;
     for(;;)
     {
          if(m-i==0)break;
          if(n-i==0)break;
          i++;
          count++;
          if(count%2==0)cout<<"Akshat"<<endl;
          else
          {
               cout<<"Malvika"<<endl;
          }
     }
     return 0;
}
