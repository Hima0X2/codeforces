#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,a,b;
     cin>>t;
     while(t--){
               cin>>a>>b;
               cout<<pow(min(max(a,2*b),max(2*a,b)),2)<<endl;
     }

}
