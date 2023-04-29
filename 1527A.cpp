#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,k;
     cin>>t;
     while(t--){
          k=1;
          cin>>n;
          for(i=0;i<64;i++){
               if(pow(2,i)>n){
                break;
               }
          }
          cout<<(int)pow(2,(i-1))-1<<endl;
     }
}

