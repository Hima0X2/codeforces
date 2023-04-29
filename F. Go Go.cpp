#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,j,r,c,x=0;
     string s[500];
     cin>>t;
     while(t--){
          cin>>r>>c;
          for(i=0;i<r-1;i++){
               cin>>s[i];
          }
          for(j=0;j<c;j++){
          for(i=r-2;i>=0;i--){
               if(s[i][j]=='#'){
                  break;
               }
               else if(s[i][j]=='X'){
                    x++;
               }
          }
          }
          cout<<x<<endl;
          x=0;
     }
}
