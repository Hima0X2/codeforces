#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,sum,p,c=17;
    cin>>n;
    while(n)
    {
       c++;
       p=c;
        sum=0;
        while(p!=0)
        {
            sum=sum+p%10;
            p=p/10;
        }
        if(sum==10)
        {
            n--;
        }
    }
    cout<<c<<endl;
}

