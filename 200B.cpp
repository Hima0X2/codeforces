#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,p;
     double t=0,y,x;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>p;
          t=t+(p/100.00);
     }
     x=(t/n);
     y=x*100;
     //cout<<y<<endl;
     printf("%0.12lf\n",y);
     return 0;
}
