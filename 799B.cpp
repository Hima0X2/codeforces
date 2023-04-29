#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int n,m,i,p[10000],s[10000],a[10000],c,ans=100000;
     long long int f,b;
     cin>>n;
     for(i=0;i<n;i++){
          cin>>p[i];
     }
    for(i=0;i<n;i++){
          cin>>a[i];
     }
     for(i=0;i<n;i++){
          cin>>s[i];
     }
     priority_queue< int, vector<int>, greater<int> > q[5][5];
     for ( int i = 0; i < n; i++ ) {
        q[a[i]][s[i]].push (p[i]);
    }
     cin>>m;
     while (m--) {
        int c;
        cin >> c;
         for(int j=0;j<3;j++){
          if(q[c][i].top()<ans){
               ans=q[c][i].top();
               f=c;
               b=i;
          }
        }
        for(int j=0;j<3;j++){
          if(!q[i][c].empty()&&q[i][c].top()<ans){
               ans=q[i][c].top();
               f=i;
               b=c;
          }
        }
         if (ans==100000){
                    ans = -1;
         }
        else {
            q[f][b].pop();
        }
 cout<<ans<<" ";
     }
cout<<endl;
}
