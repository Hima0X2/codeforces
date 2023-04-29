#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a[100]={4,7,44,77,47,74,777,444,474,447,744,774,477};
     int n,i,b=0;
     cin>>n;
     for(i=0;i<13;i++)
     {
          if(n%a[i]==0)
          {
               b++;
          }
     }
     if(b==0)
     {
           cout<<"NO"<<endl;
     }
     else
     {
           cout<<"YES"<<endl;
}
}
