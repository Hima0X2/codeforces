#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,n,w,i,sum=0;
     cin>>k>>n>>w;
     for(i=1;i<=w;i++)
     {
          sum=k*i+sum;
     }
     if(sum>n)
     {sum=sum-n;
     cout<<sum<<endl;}
     else cout<<"0"<<endl;
     return 0;
}
