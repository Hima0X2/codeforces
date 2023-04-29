#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n,a[100000],sum3=0,sum1=0,sum2=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n;)
    {
        sum1=sum1+a[i];
        i++;
        if(i<n)
        {
            sum2=sum2+a[i];
        }
        i++;
        if(i<n)
        {
            sum3=sum3+a[i];
        }
        i++;
    }
    if((sum1>sum2)&&(sum1>sum3))
    {
        cout<<"chest"<<endl;
    }
    else if((sum1<sum2)&&(sum2>sum3))
    {
        cout<<"biceps"<<endl;
    }
    else
    {
        cout<<"back"<<endl;
    }
}
