#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,i,n,k,c=0;
     cin>>t;
     while(t--){
          cin>>n>>k;
          cout<<n-k+k/2<<endl;
        for (int i = k + 1; i <= n; ++i){ cout << i << " ";
        c++;
        }
        for (int i = (k + 1) / 2; i < k; ++i){cout << i << " ";
        c++;}
        cout<<endl;
        //cout<<c<<endl;
        c=0;
     }
}
