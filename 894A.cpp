#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int count=0,a=0,b=0,i;
    for(i=0;i<n;i++){
     if(s[i]=='Q'){
          count=count+a;
          b++;
     }
     else if(s[i]=='A'){
          a=a+b;
     }
    }
    cout<<count<<endl;
}
