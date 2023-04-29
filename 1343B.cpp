#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--){
     cin>>n;
     int d=n/2;
     if(d%2!=0){
          cout<<"NO"<<endl;
     }
     else{
          cout<<"YES"<<endl;
          for(i=1;i<=d;i++){
            cout<<2*i<<" ";
          }
          for(i=1;i<d;i++){
            cout<<2*i-1<<" ";
          }
          cout <<3*d-1<< endl;
     }
    }
}
