#include<bits/stdc++.h>
using namespace std;
int main(){
     int t,j;
       string s[1000],b[10000];
     cin>>t;
     int i=0;
     j=t;
     while(t--){
     cin>>s[i];
     i++;
     }
     for(i=t-1;i>=0;i--){
          cout<<s[i]<<endl;
     }
}

