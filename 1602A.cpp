/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>t;
     while(t--){
string s,p;
cin>>s;
p=s;
sort(s.begin(),s.end());
cout<<s[0]<<" ";
bool f=1;
for(int i=0;i<s.size();i++){
            if(p[i]==s[0] && f==1){
               f=0;
            continue;
            }
            else {
                    cout << p[i];
            }
        }
cout<<endl;
     }
}
/// ALHAMDULILLAH




