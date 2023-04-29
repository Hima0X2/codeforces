#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,i,j,c=0;
     char a[100][100];
     cin>>n>>m;
     for(i=0;i<n;i++){
          for(j=0;j<m;j++){
               cin>>a[i][j];
               if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
               {
                    c=1;
                  //break;
               }
              // if(c==1){break;}
          }
     }
          if(c==0){
     cout<<"#Black&White"<<endl;}
     else
     {
          cout<<"#Color"<<endl;
     }
}
