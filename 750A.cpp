#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,sum,n;
    cin>>n>>k;
    sum=k;
    for(i=1;i<=n;i++){
     sum=sum+i*5;
     if(sum>240){
          break;
     }
    }
    cout<<i-1<<endl;
}

