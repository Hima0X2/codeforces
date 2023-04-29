#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,c=0;
     string s;
     cin>>s;
    int d=s.length();
    while(d!=1){
          //cout<<d<<endl;
          c++;
          int sum=0;
     for(i=0;i<d;i++){
          sum=sum+s[i]-'0';
     }
     s=to_string(sum);
     d=s.length();
    }
    cout<<c<<endl;
}
