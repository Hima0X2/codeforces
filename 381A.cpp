#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n,i,s=0,r=0,k=0;
     cin>>n;
     int a;
      vector<int> v;
     for(i=0;i<n;i++){
          cin>>a;
          v.push_back(a);
     }
     int z=v.size();
     while(z>0){
               if(k%2==0){
    if(v[0]>=v[z-1]){
     s=s+v[0];
     v.erase(v.begin());
    }
    else{
     s=s+v[z-1];
     v.pop_back();
    }
               }
else{
            if(v[0]>=v[z-1]){
     r=r+v[0];
    v.erase(v.begin());
    }
    else{
     r=r+v[z-1];
     v.pop_back();
    }
     }
     k++;
     z--;
     }
     cout<<s<<" "<<r<<endl;
}
