#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    string t;
    cin>>n;
    cin>>t;
    int d=0;
    for(i=0;i<n;i++){
     if(t[i]=='1')d++;
     else break;
    }
    cout<<min(d+1,n)<<endl;
}

