#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int i=0,rev[10000],d,z,e,t=0;
    cin>>n>>m;
    d=log10(m)+1;
    z=n;
go:
     n=z;
    for(i=0; i<d; i++)
    {
        rev[i]=n%10;
        if(i==d-1)
        {
            rev[i]=n;
        }
        n=n/10;
        //cout<<rev[i]<<" ";
    }
    sort(rev,rev+d);
    for(i=1; i<d; i++)
    {
        if(rev[i]==rev[i-1])
        {
            z++;
            // cout<<z<<endl;
            if(z<=m)
            {
                goto go;
            }
            else
            {
                t=1;
            }
        }
    }
    if(t==1)
    {
        cout<<-1<<endl;
    }
    else
        cout<<z<<endl;
}
