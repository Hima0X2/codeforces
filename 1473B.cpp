#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,d,lcm,i;
     string s,t;
     cin>>n;
     while(n--){
               string s1="",t1="";
          cin>>s>>t;
          a=s.length();
          b=t.length();
          lcm=a*b/__gcd(a,b);
          //cout<<lcm<<endl;
          for(i=0;i<lcm/a;i++){
               s1=s1+s;
          }
      for(i=0;i<lcm/b;i++){
               t1=t1+t;
          }
         // cout<<s1<<" "<<t1<<endl;
          if(s1.compare(t1)){cout<<-1<<endl;}
          else{
               cout<<t1<<endl;
          }
     }
}
