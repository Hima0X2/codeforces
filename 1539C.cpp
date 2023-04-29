#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,k,x,i,c=1,p,d;
     cin>>n>>k>>x;
      long long int a[n];
      vector<long long int> v;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     sort(a,a+n);
     for(i=1;i<n;i++){
          if(a[i]-a[i-1]>x){
               v.push_back(a[i]-a[i-1]);
          }
     }
     d=v.size()+1;
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
     p=v[i]/x;
     if(v[i]%x==0){
          p=p-1;
     }
     if(k-p>=0){
          d--;
          k=k-p;
     }
    }
    cout<<d<<endl;
}

