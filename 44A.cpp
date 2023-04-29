#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,p,d;
     int j,i,t,k;
     cin>>t;
       set<string> s1;
     while(t--){
          cin>>p>>d;
             s=p+" "+d;
          s1.insert(s);
     }
     k=s1.size();
     cout<<k<<endl;
}
