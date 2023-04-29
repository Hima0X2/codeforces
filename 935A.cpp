#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,c=0;
     cin>>n;
     //if(n%2==0){
     for(i=1;i<=n;i++)
     {
          if((n-i)>=i){
          if((n-i)%i==0)
          {
              c++;
          }}
     }
     cout<<c<<endl;

}
