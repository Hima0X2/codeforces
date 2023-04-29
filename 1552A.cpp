#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,n,i;
     cin>>t;
     while(t--){
               long long int c=0;
          cin>>n;
          string s,d;
          cin>>s;
          d=s;
          sort(s.begin(),s.end());
          //cout<<s<<endl;
          for(i=0;i<s.size();i++){
               if(s[i]!=d[i]){
                    c++;
               }
          }
          cout<<c<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}


