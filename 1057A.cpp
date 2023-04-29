/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int ad[mx];
vector<long long int> adj[mx];
bool vis[mx];
void dfs(long long int v,long long int n){
     ad[v]=n;
     for(auto u:adj[v]){
              if(u!=n){
               dfs(u,v);
              }
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,a;
     cin>>n;
     for(i=2;i<=n;i++){
          cin>>a;
          adj[a].push_back(i);
          adj[i].push_back(a);
     }
     dfs(1,-1);
     stack<long long int> st;
     long long int k=n;
     while(1){
          st.push(k);
          k=ad[k];
          if(k==-1){
               break;
          }
     }
     while(st.size()){
          cout<<st.top()<<" ";
          st.pop();
     }
     cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
