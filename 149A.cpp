#include<bits/stdc++.h>
using namespace std;
int main()
{
     int k,i,a[13],sum=0,c=0,d=0;
     cin>>k;
     for(i=0;i<12;i++)
     {
          cin>>a[i];
     }
      if(k==0){cout<<0<<endl;return 0;}
     sort(a,a+12);
     for(i=11;i>=0;i--)
     {
          sum=sum+a[i];
          c++;
          if(sum>=k){
                    d=0;
               cout<<c<<endl;
               break;
          }
          else{d++;}
     }
     if(d!=0)cout<<-1<<endl;
}
