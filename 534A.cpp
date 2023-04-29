#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,k=0,l=0;
     string a,b;
     cin>>n;
     if(n==1){cout<<n<<endl;
     cout<<1<<endl;
     return 0;}
     if(n==2){cout<<1<<endl;
     cout<<1<<endl;
     return 0;}
     else if(n==3){cout<<n-1<<endl;
     cout<<n-2<<" "<<n<<endl;
     return 0;}
     else if(n%2==0){
          cout<<n<<endl;
     for(i=1;i<=n;i++){
          if(i%2==0){
               a[k]=i;
               k++;
          }
          else{
               b[l]=i;
               l++;
          }
     }
     }
     else{cout<<n-1<<endl;
     for(i=1;i<n;i++){
          if(i%2==0){
               a[k]=i;
               k++;
          }
          else{
               b[l]=i;
               l++;
          }
     }
     }
     for(int z=l-1;z>=0;z--){
          cout<<int(b[z])<<" ";
     }
     for(int z=k-1;z>=0;z--){
          cout<<int(a[z])<<" ";
     }
     cout<<endl;
}
