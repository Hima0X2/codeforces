#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,a[1000],n;
     cin>>n;
     set<int> s;
     for(i=0;i<n;i++)
     {
          cin>>a[i];
          s.insert(a[i]);
     }
     if(s.size()==1){
          cout<<"NO"<<endl;
     }
     else{
          cout<<*(++s.begin())<<endl;
     }
}
