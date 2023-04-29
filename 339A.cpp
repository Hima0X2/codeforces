#include<bits/stdc++.h>
using namespace std;
int main()
{
   string a,s="",t="";
     int i,j=0;
     cin>>a;
for(i=0;i<a.size();i=i+2){
s=s+a[i];
}
sort(s.begin(),s.end());
for(i=0;i<a.size();i=i+2,j++){
t=t+s[j]+"+";
}
t.resize(t.size() - 1);
cout<<t<<endl;
     return 0;
}

