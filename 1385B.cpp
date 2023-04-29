#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,n,k;
     cin>>n;
     int a,b;

     for(i=0;i<n;i++)
     {
           map<int,int> s;
          vector<int> v;
          cin>>a;
          for(j=0;j<a*2;j++){
               cin>>b;
               if(s[b]==0)v.push_back(b);
               s[b]=1;
          }
          for(k=0;k<v.size();k++){
               cout<<v[k]<<" ";
          }
          cout<<endl;
     }
}
