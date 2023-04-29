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
     long long int t,i=0,n;
    string s;
    cin>>s;
    map<char,int> mp;
     for(int j=0;j<s.size();j++){
        if(i==0&&s[j]=='S')i++;
        if(i==1&&s[j]=='a')i++;
        if(i==2&&s[j]=='m')i++;
        if(i==3&&s[j]=='s')i++;
        if(i==4&&s[j]=='u')i++;
        if(i==5&&s[j]=='n')i++;
        if(i==6&&s[j]=='g'){
          i++; break;
        }
      }
    //cout<<mp['s']<<endl;
    //cout<<i<<endl;
     if(i==7){
     cout<<"SRBD\n";
    }
    else{
     cout<<"GHOST\n";
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



