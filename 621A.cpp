#include<bits/stdc++.h>
using namespace std;
int main(){
long long int j,t,i,k=0,n=0,a[100000],b[100000];
cin>>t;
for(i=0;i<t;i++){
     cin>>a[i];
     n=n+a[i];
     if(a[i]%2!=0){
          b[k]=a[i];
          k++;
     }
}
sort(b,b+k);
j=0;
bak:
if(n==0)cout<<n<<endl;
else if(n%2==0)
{
     cout<<n<<endl;
}
else{
     n=n-b[j];
    // cout<<n<<endl;
     j++;
     goto bak;
}
}
