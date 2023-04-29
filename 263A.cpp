#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,a[5][5],sum=0;
     for(i=0;i<5;i++)
     {
          for(j=0;j<5;j++)
          {
               cin>>a[i][j];
               if(a[i][j]==1)
               {
                sum=abs(i-2)+abs(j-2);
                //cout<<i<<endl;
                 //cout<<j<<endl;
               }
          }
     }
     cout<<sum<<endl;
     return 0;
}
