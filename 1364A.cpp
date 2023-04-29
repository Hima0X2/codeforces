#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
long long int t,n,x,i,c,d,sum,sub;
cin>>t;
while(t--){
          sum=0;
sub=0;
          c=0;
          d=0;
     cin>>n>>x;
     for(i=0;i<n;i++){
          cin>>a[i];
          sum=sum+a[i];
          sub=sub+a[i];
     }
     c=n;
     d=n;
      for(i=0;i<n;i++){
              // cout<<c<<endl;
        if(sum%x!=0){break;}
        c--;
        sum=sum-a[i];
     }
      for(i=n-1;i>=0;i--){
          if(sub%x!=0){break;}
        d--;
        sub=sub-a[i];
     }
     //cout<<c<<" "<<d<<endl;
     if(max(c,d)==0){
          cout<<-1<<endl;
     }
     else{
          cout<<max(c,d)<<endl;
     }
}
}


