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
     string a, b;
     cin>>t;
     while(t--){
        cin >> a >> b;
        if(a==b) cout << "=" << endl;
        else if(a.back()==b.back()){
            if(a.back()=='S'){
                if(a.size()<b.size()) cout << ">" << endl;
                else cout << "<" << endl;
            }
            else {
                if(a.size()<b.size()) cout << "<" << endl;
                else cout << ">" << endl;
            }
        }
        else if(a.back()=='S') cout << "<" << endl;
        else if(b.back()=='S') cout << ">" << endl;
        else if(a.back()=='L') cout << ">" << endl;
        else if(b.back()=='L') cout << "<" << endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




