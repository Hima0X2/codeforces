#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,k,l,c,p,d,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     cout << min(min(k * l / nl, c * d), p / np) / n << endl;
     //cout<<x<<endl;
}
