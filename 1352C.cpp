#include<bits/stdc++.h>
using namespace std;
int kthNonDivisible(int N, int K)
{
    return K + floor((K - 1) / (N - 1));
}
int main()
{
     long long int n,t,k;
     cin>>t;
     while(t--){
               cin>>n>>k;
              // cout<<k + floor((k - 1) / (n- 1))<<endl;
            cout << kthNonDivisible(n, k)<<endl;
     }
}
