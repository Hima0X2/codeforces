#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j,k,m,c=0;
     cin>>n;
     int a[n],b[n];
     while(n--){
               cin>>m>>k;
     for(i=0;i<m;i++){
          cin>>a[i];
     }
     sort(a,a+m);
      for(i=0;i<m;i++){
          cin>>b[i];
     }
     sort(b,b+m);
     reverse(b,b+m);
   for(i=0;i<m;i++){
     if(a[i]+b[i]>k){
          cout<<"No"<<endl;
          break;
     }
     else{
          c=1;
     }
   }
   if(c==1){cout<<"Yes"<<endl;}
   c=0;
}
}
