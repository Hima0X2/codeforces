#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     int i;
     cin>>a>>b;
     reverse(b.begin(),b.end());
     {
       if(a==b)
     {
          cout<<"YES"<<endl;
     }
     else
     {
          cout<<"NO"<<endl;
     }
     }
   return 0;
}
