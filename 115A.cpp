#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 const int MX=2e3+123;
vector<int>adj[MX];
int lev[MX];
int mxlv=1;
int x;

void bfs(int a){
    bool vis[MX];
    memset(vis,0,sizeof(vis));
    vis[a]=1;
    lev[a]=1;
    queue<int>q;
    q.push(a);

    while(!q.empty()){
        int y=q.front();
        q.pop();

        for(auto u:adj[y]){
            if(!vis[u]){
                vis[u]=1;
                lev[u]+=(lev[y]+1);
                if(lev[u]>mxlv)mxlv=lev[u];
                q.push(u);
            }
        }
    }
}


int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>x;
        if(x==-1)adj[0].push_back(i);
        else adj[x].push_back(i);
    }

    for(auto u:adj[0]){
        bfs(u);
    }
    cout<<mxlv<<endl;




    return 0;
}
