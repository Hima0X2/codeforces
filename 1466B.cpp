#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,t,i,k,j,a[10000];
     cin>>t;
     while(t--){
           set<long long int> s;
          map<long long int,long long int>m;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          for(int l=1;l<n;l++){
                    if(m[a[l]+1]==0){
                         a[l]=a[l]+1;
                    }
                    m[a[l]]++;
              s.insert(a[l]);
          }
          cout<<s.size()+1<<endl;
     }
}
