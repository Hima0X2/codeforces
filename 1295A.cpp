#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
     cin>>n;
     int m=n/2;
    if(n%2==1){
     cout<<7;
    for(int i=1;i<m;i++){cout<<1;}
    }
    else{
     for(int i=0;i<m;i++){cout<<1;}
    }
    cout<<endl;
    }
}
