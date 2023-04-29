#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,q,d,a,sum=0,j;
    cin>>t;
    while(t--){
     cin>>q>>d;
     for(i=0;i<q;i++){
          cin>>a;
          if(a%d==0){
                    cout<<"YES\n";
          }
          else if(a<d)
          {
                    cout<<"NO\n";
          }
          else{
               for(j=d;;j=j+10){
                         if(j==a){ cout<<"YES\n";
                       break;
                       }
                    sum=sum+j;
                    if(sum>a)
                    {
                         cout<<"NO\n";
                         break;
                    }
                    else if(sum==a){
                        cout<<"YES\n";
                       break;
                    }
               }
          }
          sum=0;
     }
    }
}

