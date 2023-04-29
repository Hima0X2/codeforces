#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     cin>>a;
     int i,n;
     bool flag=1;
   n=a.length();
     for(i=0;i<n;i++)
     {
          if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')
          {
              i=i+2;
          if(!flag)
          {
               cout<<" ";
          }
          continue;}
           else
     {
          flag=0;
          cout<<a[i];
     }
     }

        //WUBWUBABCWUB cout<<b[j]<<endl;
     return 0;
}
