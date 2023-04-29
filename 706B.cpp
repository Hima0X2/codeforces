#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t,n,i,a[1000000],b;
   cin>>n;
   for(i=0;i<n;i++){
     cin>>a[i];
   }
    sort(a,a+n);
   cin>>t;
   while(t--){
          long long int c=0;
     cin>>b;
    cout<<upper_bound(a,a+n,b)-a<<endl;
   }
    return 0;
}


