#include<bits/stdc++.h>
using namespace std;
int main()
{
     int c1,c2,c3,c4,c5,sum;
     cin>>c1>>c2>>c3>>c4>>c5;
     sum=c1+c2+c3+c4+c5;
     if(sum==0){cout<<-1<<endl;}
     else if(sum%5==0)cout<<sum/5<<endl;
     else cout<<-1<<endl;
}
