#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,n;
     string b;
     cin>>t;
     while(t--){
          cin>>n;
          cin>>b;
          sort(b.begin(),b.end());
          cout<<b<<endl;
     }
}
