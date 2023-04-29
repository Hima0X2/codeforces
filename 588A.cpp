#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,sum=0,j,k,min_prize=0;
     cin>>n;
     int a[n],p[n];
     for(i=0;i<n;i++){
          cin>>a[i]>>p[i];
     }
     if(n==1){
          cout<<a[0]*p[0]<<endl;
          return 0;
     }
     min_prize=p[0];
        for(j=0,k=0;j<n,k<n;j++,k++)
        {
               if(p[j]<min_prize)
               {
                    min_prize=p[j];
                    sum=sum+a[k]*min_prize;
               }
               else
               {
                    sum=sum+a[k]*min_prize;
               }
        }
        cout<<sum<<endl;
}
