#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s1,s2,s3;
     int l1,l2,l3,k;
     int a[100]={0},b[100]={0};
     cin>>s1>>s2>>s3;
     l1=s1.length();
      l2=s2.length();
       l3=s3.length();
       if(l3!=l1+l2)cout<<"NO"<<endl;
       else
       {
            s1=s1+s2;
     for(int i=0;i<l3;i++)a[s1[i]]++;
     for(int i=0;i<l3;i++)b[s3[i]]++;
     for(k='A';k<='Z';k++)
     {
          if(a[k]!=b[k])
          {
               cout<<"NO"<<endl;
               return 0;
          }

     }
     cout<<"YES"<<endl;
       }
       return 0;
}
