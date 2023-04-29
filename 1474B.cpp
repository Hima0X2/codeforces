#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];
bool isPrime(long long int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0){
            return false;
        }

    return true;
}
int main()
{
    optimize();
    long long int t,i,d,j,m;
    cin>>t;
    while(t--)
    {
        cin>>d;
        bool flag=false;
        for(i=d+1;;){
         if(isPrime(i))
         {
              if(!flag){
              flag=true;
              m=i;
              i=i+d;
              continue;
              }
              else{
               cout<<m*i<<endl;
               break;
              }
         }
         i++;
        }

     }
}


