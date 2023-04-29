#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,p;
    cin >> t;
    while( t-- )
    {
      cin >>n;
       p = n&(n-1);
      if(p == 0){
         cout<<"NO"<<endl;
      }
      else cout<<"YES"<<endl;
    }
}
