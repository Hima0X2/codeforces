#include<bits/stdc++.h>
using namespace std;
int main()
{
     char a[100],b[100];
     int i,lower=0,upper=0;
     cin>>a;
     for(i=0;i<strlen(a);i++)
     {
          if(a[i]>='a'&&a[i]<='z')
          {
               lower++;
          }
          else if(a[i]>='A'&&a[i]<='Z')
          {
              upper++;
          }
     }
          if(upper>lower)
          {
           for(i=0;i<strlen(a);i++)
           {
                b[i]=toupper(a[i]);
                cout<<b[i];
           }
cout<<endl;
          }
          else if(upper<=lower)
          {
              for(i=0;i<strlen(a);i++)
           {
                b[i]=tolower(a[i]);
                cout<<b[i];
           }
           cout<<endl;
          }

}
