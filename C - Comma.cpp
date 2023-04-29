#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum=0;
    cin>>n;
    if(n>=1000){
     sum=sum+(n-999);
    }
     if(n>=1000000){
     sum=sum+(n-999999);
    }
     if(n>=1000000000){
     sum=sum+(n-999999999);
    }
     if(n>=1000000000000){
     sum=sum+(n-999999999999);
    }
     if(n>=1000000000000000){
     sum=sum+(n-999999999999999);
    }
cout<<sum<<endl;
}

