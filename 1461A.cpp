#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,i,n,k,j;
   cin>>t;
   while(t--){
    cin>>n>>k;
    for(i=0;i<k;i++){
     cout<<"a";
    }
    for(j=0;j<(n-k);){
     cout<<"b";
     j++;
     if(j<(n-k)){
          cout<<"c";
          j++;
     }
      if(j<(n-k)){
          cout<<"a";
          j++;
     }
    }
    cout<<endl;
   }
}

