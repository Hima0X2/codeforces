
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,x,y,i,k,sum,c;
     cin>>t;
     for(k=0;k<t;k++)
     {
          cin>>x;
          for(i=1;;i++)
          {
             sum =i*(i+1)/2;
              if(sum<x){continue;}
              c=i;
              if(x==sum-1){c++;}
              break;
          }
          cout<<c<<endl;
     }
}
