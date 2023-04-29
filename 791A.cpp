#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c=0;
     cin>>a>>b;
     while(1)
     {
           if(a>b)
           {
                break;
           }
           else
           {
             a=3*a;
           b=2*b;
           c++;
           }
     }
    cout<<c;
}
