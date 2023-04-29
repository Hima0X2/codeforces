#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int a,b,i,f=1;
     cin>>a>>b;
     if(b-a>=10){
               //cout<<b-a<<endl;
          cout<<0<<endl;
     }
     else{
     for(i=b;i>a;i--){
          f=(f*i)%10;
     }
     cout<<f%10<<endl;
     }
}
