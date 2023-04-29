
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i;
     string s;
     cin>>t;
     while(t--){
               long long int c=0,d=0;
          cin>>s;
          long long int a1=count(s.begin(),s.end(),'1');
          long long int a0=count(s.begin(),s.end(),'0');
          long long int mn=min(a0,a1);
          for(i=0;i<s.size();i++){
               if(s[i]=='1'){
                   c++;
                   a1--;
               }
               else if(s[i]=='0'){
                    d++;
                    a0--;
               }
                mn=min(mn,d+a1);
          mn=min(mn,c+a0);
          }
          cout<<mn<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}



