#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,sum=0;
     cin>>n;
     for(i=1;;i++){
          sum=sum+i;
          if(sum>=n){
               cout<<i<<endl;
               break;
          }
     }
}

