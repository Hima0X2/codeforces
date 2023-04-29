#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a,b,c=0,t,k;
     cin>>t;
     for(k=0;k<t;k++){
     cin>>a>>b>>n;
     for(;;i++)
     {
          if(a>b){
               b=a+b;
               c++;
          }
          else
          {
              a=b+a;
               c++;
          }
          if(a>n||b>n)
          {
               cout<<c<<endl;
               break;
          }
     }
     c=0;
     }
}
