#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int t,i,n,a[10000];
  cin>>t;
  while(t--){
     cin>>n;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
      set<int> s;
      for(int j=0;j<n;j++){
      for(int k=j+1;k<n;k++){
          s.insert(abs(a[j]-a[k]));
      }

 }
 cout<<s.size()<<endl;
  }
}
