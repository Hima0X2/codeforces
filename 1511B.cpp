#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,b,c,m,n,o;
     cin>>t;
     while(t--){
     m=1;
     n=1;
     o=1;
          cin>>a>>b>>c;
          while(a>1){
               m=m*10;
               a--;
          }
          while(b>1){
               n=n*10;
               b--;
          }
           while(c>1){
               o=o*10;
               c--;
          }
          o=o*6;
          m=m+o;
          cout<<m<<" "<<n<<endl;
     }
}
