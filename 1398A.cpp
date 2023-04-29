#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n,a[100000];
    cin>>t;
    while(t--){
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>a[i];
     }
     if(a[2]+a[1]<=a[n])
     {
          cout<<1<<" "<<2<<" "<<n<<endl;
     }
     else{
          cout<<-1<<endl;
     }
    }
}

