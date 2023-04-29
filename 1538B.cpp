#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,n,i;
     cin>>t;
     while(t--){
               long long int sum=0,sum1=0,k=0;
          cin>>n;
          long long int a[n];
          for(i=0;i<n;i++){
               cin>>a[i];
               sum=sum+a[i];
          }
          sort(a,a+n);
          reverse(a,a+n);
          if(sum%n==0){
                   long long int p=sum/n;
                   for(i=0;i<n;i++){
            if(a[i]>p){
               sum1=sum1+(a[i]-p);
                k++;
               //cout<<sum1<<endl;
            }
            else if(a[i]<p){
                    if(sum1>=(p-a[i])){
               sum1=sum1-(p-a[i]);
                    }
            }
                   }
            cout<<k<<endl;
          }
          else{
               cout<<"-1\n";
          }
     }
}

