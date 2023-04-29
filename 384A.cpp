#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,j,c=0;
     cin>>n;
      for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               if((i+j)%2==0){
                    c++;
               }
          }}
           cout<<c<<endl;
     for(i=0;i<n;i++){
          for(j=0;j<n;j++){
               if((i+j)%2!=0){
                    cout<<".";
               }
               else{
                    cout<<"C";
                    //c++;
               }
          }
          cout<<endl;
     }
}

