#include<bits/stdc++.h>
using namespace std;
int main()
{
     int d1,d2,d3,sum,sub,sum1,sum2;
     cin>>d1>>d2>>d3;
     sum=d1*2+d2*2;
     sub=d3+d2+d1;
     sum1=2*(d2+d3);
     sum2=2*(d1+d3);
     cout<<min(sum2,min(sum1,min(sum,sub)))<<endl;
}
