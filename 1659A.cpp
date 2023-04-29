/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,r,b;
    cin>>t;
    while(t--)
    {
        long long int k=0,j;
        cin>>n>>r>>b;
        string s;
        cin>>s;
        for(i=0; i<min(r,b); i++)
        {
            cout<<"RB";
            k++;
        }
        j=k;
        while(k<r)
        {
            cout<<"R";
            k++;
        }
        k=j;
        while(k<b)
        {
            cout<<"B";
            k++;
        }
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
