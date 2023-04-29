#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,c=0,j;
     cin>>n;
     long long int a;
     map< long long int, long long int> mp;
     for(i=1;i<=n;i++){
          cin>>a;
         c=c+i-mp[a]-1;
		mp[a]++;
     }
      cout<<c<<endl;
}

