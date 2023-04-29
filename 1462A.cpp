#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,t,n,j,k;
     string a[10000],b[10000];
     cin>>t;
     while(t--){
          cin>>n;
          for(i=1;i<=n;i++){
               cin>>a[i];
          }
           for(i=1,j=n,k=1;i<=n;i++){
                if(i%2==0){
                    b[i]=a[j];
                    j--;
                    //i++;
                }
                else{
                    b[i]=a[k];
                    k++;
                }
           }
           for(int l=1;l<=n;l++){
              cout<<b[l]<<" ";
          }
          cout<<endl;
     }
}
