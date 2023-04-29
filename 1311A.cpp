#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,a,b;
     cin>>t;
     while(t--)
     {
          cin>>a>>b;
          if(a>b){
               i=a-b;
               if(i%2==0)
               {
                    cout<<"1"<<endl;
               }
               else{
                     cout<<"2"<<endl;
               }
          }
          else if(a<b){
               i=b-a;
                 if(i%2==0)
               {
                    cout<<"2"<<endl;
               }
               else{
                     cout<<"1"<<endl;
               }
                    //cout<<i<<endl;
          }
               else{
                    cout<<"0"<<endl;
               }
     }
}
