#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,c=0,a,k,d;
   long long  int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
         k=n;
        bak:
             n=k;
             while(n!=0)
             {
                 a=n%10;
                  n=n/10;
                  if(a!=0){
                     d=k%a;
                    if(d!=0)
                    {
                         k++;
                         goto bak;
                    }
               }
             }
             cout<<k<<endl;
    }
}

