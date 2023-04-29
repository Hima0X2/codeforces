#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
//long long int a[mx];


int main()
{
     optimize();
    string s,t,a,b,c,d;
    long long int n,i,j;
    cin>>s>>t;
    a=s,b=t;
    cin>>n;
    cout<<a+" "+b<<endl;
    for(i=0;i<n;i++){
     cin>>s>>t;
     c=s,d=t;
     if(a==c){a=d;}
     else{
          b=d;
     }
     cout<<a+" "+b<<endl;
    }
}


