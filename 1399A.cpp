#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,i,j,k=0;
     bool p=true;
     cin>>t;
     for(i=0;i<t;i++)
     {
            k=0;
          cin>>n;
          int a[n];
          for(j=0;j<n;j++){
               cin>>a[j];
          }
          sort(a,a+j);
            for(j=1;j<n;j++){
          {
                p=p* (a[j]-a[j-1]<=1);
          }
          }
          if(p)cout << "YES" << endl;
          else cout<<"NO"<<endl;
          p=true;
               }
}
