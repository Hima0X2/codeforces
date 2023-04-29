#include<bits/stdc++.h>
using namespace std;
int main()
{
     double a,b,c,d,l,p,n,m,q,x,y;
     cin>>a>>b>>c>>d;
     l=(a*75);
     p=250*a-(a*c);
     x=max(l,p);
      m=(75*b);
     q=250*b-(b*d);
     y=max(m,q);
    if(x==y)
     {
          cout<<"Tie"<<endl;
     }
     else if(x>y)
     {
           cout<<"Misha"<<endl;
     }
     else
     {
           cout<<"Vasya"<<endl;
     }
}
