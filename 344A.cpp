#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i,a[100000],c=0;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
             scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
     {
            if(a[i]!=a[i+1])c++;
     }
     cout<<c<<endl;
     return 0;
}
