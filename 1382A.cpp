#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,i,j,t,c=0,sum;
     long long int a[100000],b[100000];
     cin>>t;
     while(t--){
          cin>>m>>n;
          for(i=0;i<m;i++){
               cin>>a[i];
          }
           for(j=0;j<n;j++){
               cin>>b[j];
          }
           for(i=0;i<m;i++){
                 for(j=0;j<n;j++){
                         if(a[i]==b[j])
                         {
                              c++;
                              sum=a[i];
                              break;
                         }
                         if(c!=0)break;
                 }
           }
           if(c!=0){
                    cout<<"YES"<<endl;
               cout<<1<<" "<<sum<<endl;
           }
           else{
                 cout<<"NO"<<endl;
           }
           c=0;
     }
}
