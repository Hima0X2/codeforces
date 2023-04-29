#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,d,c=0,z,i;
    cin>>t;
    while(t--)
    {
        vector<int> v;
        c=0;
        cin>>n;
        if(n%10!=0)
        {
             v.push_back(n%10);
            c++;
        }
        z=n%10;
        n=n-z;
        if(n%100!=0)
        {
                v.push_back(n%100);
            //cout<<n%100<<" ";
            c++;
        }
        z=n%100;
        n=n-z;
        if(n%1000!=0)
        {
                v.push_back(n%1000);
            //cout<<n%1000<<" ";
            c++;
        }
        z=n%1000;
        n=n-z;
        if(n%10000!=0)
        {
                v.push_back(n%10000);
            //cout<<n%10000<<" ";
            c++;
        }
         z=n%10000;
        n=n-z;
        if(n%100000!=0)
        {
                v.push_back(n%100000);
            //cout<<n%10000<<" ";
            c++;
        }
        cout<<c<<endl;
   for(i=0;i<v.size();i++){
     cout<<v[i]<<" ";
}
cout<<endl;
    }
}
