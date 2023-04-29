#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,c,d,n,e;
     cin>>n;
     while(n--){
     cin>>a>>b>>c>>d;
       if(a<=b){
          cout<<b<<endl;
     }
     else if(c<=d){
          cout<<-1<<endl;
     }
     else{
               e=(a-b+c-d-1)/(c-d);
          cout<<b+e*c<<endl;
     }
     }
}
