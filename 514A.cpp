#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a;
     cin>>a;
     for(int i=0;i<a.length();i++){
       if(i==0&&a[i]=='9'){
          cout<<9;
       }
       else{
          int b=a[i]-'0';
          cout<<min(b,9-b);
       }
     }
     cout<<endl;
}
