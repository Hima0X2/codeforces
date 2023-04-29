#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,d;
     string s;
     cin>>t;
     while(t--){
     cin>>s;
     d=s.length();
     if(s[d-1]=='o'){
          cout<<"FILIPINO"<<endl;
     }
     else if(s[d-1]=='a'){
          cout<<"KOREAN"<<endl;
     }
     else{
          cout<<"JAPANESE"<<endl;
     }
     }
}

