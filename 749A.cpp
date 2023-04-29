#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,i;
     cin>>a;
     cout<<(a/2)<<endl;
     if(a%2==0){
     for(i=0;i<(a/2)-1;i++)
     {
         cout<<"2 ";
     }
     cout<<"2"<<endl;
     }
     else if(a%2==1)
     {
           for(i=0;i<(a/2)-1;i++)
     {
         cout<<"2 ";
     }
     cout<<"3"<<endl;
     }
}
