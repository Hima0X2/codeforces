#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,i,mx=0,h,m,a[24][60];
     memset(a,0,sizeof(a));
     cin>>n;
     for(i=0;i<n;i++){
          cin>>h>>m;
          a[h][m]++;
     }
     for(int j=0; j<24; j++){
    	for(int i=0; i<60; i++){
        	mx=max(mx,a[j][i]);
        }
    }
 cout<<mx<<endl;
}
