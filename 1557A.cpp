#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,n,i;
     cin>>t;
     while(t--){
               double sum=0;
          cin>>n;
          for(i=0;i<n;i++){
               cin>>a[i];
          }
          sort(a,a+n);
          for(i=0;i<n-1;i++){
               sum=sum+a[i];
          }
     sum=sum/(n-1);
     std::cout << std::fixed << std::setprecision(9);
     cout<<sum+a[n-1]<<endl;
     }

     }


