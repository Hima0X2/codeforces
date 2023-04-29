#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long int n,i,j,l,b,sum=0;
    cin>>n;
    int a[1000],z[1000];
   for(i=0;i<n;i++)
   {
        cin>>b;
        for(j=0;j<b;j++)
        {
             cin>>a[j];
             //z[j]=pow(2,a[j]);
        }
        sort(a,a+b);
         for(j=0;j<b-1;j++)
        {
             if(a[j]==a[j+1])
             {
                  cout<<"YES"<<endl;
                  sum=0;
                  break;
             }
             else{
               sum=1;
             }
        }
        if(sum==1)cout<<"NO"<<endl;
        sum=0;
   }
}
