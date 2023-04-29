#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,t;
    cin>>n>>a;
    if(n%2==0){
        t=n/2;
        if(a<=t){
            cout<<2*a-1<<endl;
        }
        else{
            a=a-t;
            cout<<2*a<<endl;
        }
    }
    else{
        t=n/2+1;
        if(a<=t){
            cout<<2*a-1<<endl;
        }
        else{
            a=a-t;
            cout<<2*a<<endl;
        }
    }
    return 0;
}
