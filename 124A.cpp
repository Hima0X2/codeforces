#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,a,b,c=0;
     cin>>n>>a>>b;
   for(int i=1;i<=n;i++){
     if(i>a&&(n-i)<=b){
          c++;
     }
   }
   cout<<c<<endl;
}

