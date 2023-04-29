#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,j,a,b,c;
     cin>>t;
     for(i=0;i<t;i++){
          cin>>a>>b>>c;
          if(a>b)swap(a,b);
          if(a>c)swap(a,c);
          if(b>c)swap(b,c);
          if(b==c){
               cout<<"YES"<<endl;
               cout<<a<<" "<<a<<" "<<c<<endl;;
          }
          else{
                cout<<"NO"<<endl;
          }
     }
}
