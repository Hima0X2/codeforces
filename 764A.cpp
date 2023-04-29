#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,z,i,j,c=0;
     cin>>n>>m>>z;
     long long int k=m;
     for(i=1;n<=z;i++){
            m=k;
                n=i*n;
          for(j=1;m<=z;j++){
               m=j*m;
               if(n==m){c++;}
          }
     }
     cout<<c<<endl;

}
