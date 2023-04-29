#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,l,r,x=0,d;
     cin>>n;
     for(i=0;i<n;i++)
     {
          cin>>l>>r;
        if(2*l>r){
          cout<<-1<<" "<<-1<<endl;
        }
        else{
          cout<<l<<" "<<2*l<<endl;
        }
     }
}
