#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i;
    double n,k;
    cin>>t;
    while(t--){
        long long int c;
    cin>>n>>k;
    if(k>=n){
          cout<<(int)ceil(k/n)<<endl;
 //   cout<<ceil(k/n)<<endl;
    }
    else{
      for(i=1;i<=n;i++){
                 if(k==1){
              cout<<1<<endl;
              break;
          }
          else{
          c=ceil(n/k)*k;
          cout<<(int)ceil(c/n)<<endl;
          break;
          }
    }
    }
    //cout<<k/n<<endl;
    }
}

