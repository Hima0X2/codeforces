#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,i,sum=0,s=0;
    cin>>n;
    long long int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]<0)
        {
            c++;
            sum+=(-1*a[i])-1;
        }
        else if(a[i]==0)
        {
            s++;
            sum++;
        }
        else
            sum+=a[i]-1;
    }
    if(c%2==1 && s==0)
    {
        cout<<sum+2<<endl;
    }
    else
    {
        cout<<sum<<endl;
    }
}
