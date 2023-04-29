// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

const int mx = 2e5+123;
long long a[mx],sum0[mx],sum1[mx];
int main()
{
     long long q,n,i,k;
     long long ans;
     string s;
     cin>>q;
     while(q--){
          cin>>s;
          cin>>k;
          int d=s.length();
         for(i=1;i<=n;i++){
     sum0[i]=sum0[i-1]+(s[i-1]=='0');
     sum1[i]=sum1[i-1]+(s[i-1]=='1');
   }
   ordered_set ps;
   map<int,int> cnt;
   ps.insert(0);
   cnt[0]++;
   ans=0;
   for(int i=1;i<=n;i++){
     long long int d1=sum0[i]-(k*sum1[i]);
     ans=ans+(ps.order_of_key(d1))+cnt[d1];
     ps.insert(d1);
     cnt[d1]++;
   }
     }
     cout<<q<<" : "<<ans<<endl;
}
