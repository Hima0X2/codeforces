/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];
bool end(int w1,int w2,int r1,int r2){
     if((w1>w2+r2)||(w2>w1+r1)){
          return 1;
     }
     else{
          return 0;
     }
}
int wina(string s)
{
    int w1=0,w2=0,rem1=5,rem2=5;
    int ans=0;
    for (int i = 0; i < 10; i++)
    {
        if(end(w1,w2,rem1,rem2))
        {
            return ans;
        }
        if(s[i]=='1' || s[i]=='?')
        {
            w1++;
            rem1--;
        }
        else if (s[i] == '0')
        {
            rem1--;
        }
        ans++;
        i++;
        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }

        if (s[i] == '1')
        {
            w2++;
            rem2--;
        }
        else if (s[i] == '0' || s[i] == '?')
        {
            rem2--;
        }
        ans++;
    }

    return 10;

}

int winb(string s)
{
    int w1 = 0, w2 = 0, rem1 = 5, rem2 = 5;
    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }
        if (s[i] == '1' )
        {
            w1++;
            rem1--;
        }
        else if (s[i] == '0' || s[i] == '?')
        {
            rem1--;
        }
        ans++;

        if (end(w1, w2, rem1, rem2))
        {
            return ans;
        }

        i++;

        if (s[i] == '1' || s[i] == '?')
        {
            w2++;
            rem2--;
        }
        else if (s[i] == '0' )
        {
            rem2--;
        }
        ans++;
    }

    return 10;
}
int main()
{
    optimize();
    long long int t;
    cin>>t;
    string s;
    while(t--)
    {
        long long int a=0,b=0,p;
        cin>>s;
        cout<<min(wina(s),winb(s))<<endl;
    }
}
/// ALHAMDULILLAH



