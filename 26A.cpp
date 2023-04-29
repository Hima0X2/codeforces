#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
bitset<mx>a;
long long int prime(long long int n){
long long int i,j,c=0;
//memset(a,0,sizeof(a));
a[1]=1;
for(i=4;i<=n;i=i+2){
     a[i]=1;
}
for(i=3;i<=n;i=i+2){
     for(j=i*i;j<=n;j=j+(i+i)){
          a[j]=1;
     }
}
vector<long long int> v;
for(i=1;i<=n;i++){
    if(!a[i]){
     v.push_back(i);
    }
}
for(i=0;i<v.size();i++){
     if(n%v[i]==0){
        c++;
     }
}
return c;
}
int main()
{
     optimize();
long long int i,n,d=0;
cin>>n;
for(i=4;i<=n;i++){
     if(prime(i)==2){
          d++;
     }
}
cout<<d<<endl;
}
//O(N log (log N))



