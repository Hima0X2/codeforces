#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,sum,sub;
    string a,b;
    cin>>t;
    while(t--){
     cin>>n;
     cin>>a>>b;
     sum=0;
     sub=0;
     for(i=0;i<n;i++){
         if(a[i]>b[i])sum++;
         else if(a[i]<b[i])sub++;
     }
     if(sub>sum){cout<<"BLUE"<<endl;}
     else if(sub<sum){cout<<"RED"<<endl;}
     else{cout<<"EQUAL"<<endl;}
    }
}

