#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
const int mx = 1e5+123;
int main()
{
     long long int n,a[100000],i,m,q,b[10000],h[100000],p=0;
     cin>>n;
     for(i=1;i<=n;i++){
          cin>>a[i];
         b[i]=p+1;
          h[i]=p+a[i];
          p=h[i];
     }
     cin>>m;
     while(m--){
          cin>>q;
          long long int l=1,r=n,mid;
          while(l<=r){
               mid=(l+r)>>1;
               if(q>=b[mid]&&q<=h[mid]){
                    cout<<mid<<endl;
                    break;
               }
               if(q<b[mid]){
                    r=mid-1;
               }
               else{
                    l=mid+1;
               }
          }
     }
}
