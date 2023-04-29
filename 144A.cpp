/// BISMILLAHIR RAHMANIR RAHIM
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
     long long int t,i,n;
     cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
    }
  long long int mx=a[0],j=0,mn=a[n-1],k=0;

    for(i = 0 ; i <n ; i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
            j=i;
        }
         if(a[i]<=mn)
        {
            mn=a[i];
            k=i;
        }
    }
long long int m=n-1-k;
    if (j== 0 && k == n-1 ) {
           cout<<0<<endl;
    }
    else if(k>j)
    {
        cout<<j+m<<endl;
    }
    else
    {
         cout<<j+m-1<<endl;

    }
}
/// ALHAMDULILLAH



