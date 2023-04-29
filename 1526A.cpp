#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,a[10000];
    cin>>t;
    while(t--){
     cin>>n;
     //long long int a[n];
     for(i=0;i<2*n;i++){
          cin>>a[i];
     }
     sort(a,a+2*n);

      for(i=0;i<n;i++){
        cout<<a[i]<<" "<<a[i+n]<<" ";
     }
     cout<<endl;
    }
}

