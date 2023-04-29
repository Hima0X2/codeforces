#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a,b,c,s1,s2,s3,sum=0;
     cin>>a>>b>>c;
     s1=sqrt((a*b)/c);
     s2=sqrt((c*b)/a);
     s3=sqrt((a*c)/b);
     sum=4*(s1+s2+s3);
     cout<<sum<<endl;
}
