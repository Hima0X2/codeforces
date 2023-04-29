#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b,i,t,j;
     string s;
     cin>>t;
     while(t--){
          cin>>n>>a>>b;
          for(j=0;j<n;j++){
            s[j]= ('a' + j % b);
            cout<<s[j];
            }

          cout<<endl;
     }
}
