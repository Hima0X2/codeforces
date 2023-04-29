#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx],r1[mx],r2[mx],r3[mx],r4[mx],r5[mx];

int main()
{
     optimize();
     long long int t,n,i;
     cin>>t;
     be:
     while(t--){
                a[1]=0,a[2]=0,a[3]=0,a[4]=0,a[5]=0;
               long long int mn1=1e7+123,mn2=1e7+123,mn3=1e7+123,mn4=1e7+123,mn5=1e7+123,j;
          cin>>n;
          for(i=0;i<n;i++){
          cin>>r1[i]>>r2[i]>>r3[i]>>r4[i]>>r5[i];
          }
          if(n==1){
               cout<<1<<endl;
               continue;
          }
          else{
         for(i=0;i<n;i++){
          mn1=min(mn1,r1[i]);
          mn2=min(mn2,r2[i]);
           mn3=min(mn3,r3[i]);
            mn4=min(mn4,r4[i]);
             mn5=min(mn5,r5[i]);
          }
           for(i=0;i<n;i++){
         if(mn1==r1[i]){
          a[1]++;
         }
         else if(mn2==r2[i]){
          a[2]++;
         }
     else if(mn3==r3[i]){
          a[3]++;
         }
         else if(mn4==r4[i]){
          a[4]++;
         }
         else if(mn5==r5[i]){
          a[5]++;
         }
          }
         for(i=1;i<=5;i++){
          for(j=1;j<=5;j++){
               if(i!=j&&a[i]==a[j]){
                    cout<<-1<<endl;
                    goto  be;
               }
          }
         }
          sort(a,a+5);
          cout<<a[5]<<endl;
          }
     }
//std::cout << std::fixed << std::setprecision(2);
}


