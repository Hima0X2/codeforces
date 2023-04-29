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

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,x,j,m,sum;
    cin>>n>>x;
    vector<long long int> v;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    bitset<32> b;
    for(i=0; i<2*n; i++)
    {
        v.clear();
        b=i;
       sum=0;
        for(j=0; j<n; j++)
        {
            if(b[j]==1)
            {
                sum=sum+a[j];
                v.push_back(j+1);
            }
        }
        if(sum==x&&v.size()==2)
        {
             //cout<<"HI\n";
            break;
        }
    }
    //cout<<sum<<endl;
    for(i=0; i<2; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




