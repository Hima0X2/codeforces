#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,v1,v2,t1,t2,a,b;
    cin>>s>>v1>>v2>>t1>>t2;
    a=s*v1+t1*2;
    b= s*v2+t2*2;
    if(a>b){cout<<"Second"<<endl;}
    else if(a<b){cout<<"First"<<endl;}
    else{cout<<"Friendship"<<endl;}
}
