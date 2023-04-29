#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,i,d,sum=5,sub=0;
 cin>>n>>d;
 int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
     sub=sub+a[i];
 }
 sum=5+a[0];
 for(i=1;i<n;i++){
          sum=sum+10;
     sum=sum+a[i];
 }
 if(sum==d)
 cout<<sub<<endl;
 else
 {
      cout<<-1<<endl;
 }
}
