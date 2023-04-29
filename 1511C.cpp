#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,j,q,a[300000],b[300000],x=0,p;
     cin>>n>>q;
     for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(j=0;j<q;j++){
          cin>>b[j];
     }
     for(i=0;i<q;i++){
       for(j=0;j<n;j++){
         if(b[i]==a[j]){
               cout<<j+1<<" ";
              x=j;
               break;
          }
     }
     while(x!=0){
          swap(a[x],a[x-1]);
          x--;
     }
     }
     cout<<endl;
}
