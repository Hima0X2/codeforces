#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,c=1,f=1;
    cin>>n;
    int a[n];

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1)
        cout<<1<<endl;
    else
    {
        for(i=1; i<n; i++)
        {
            if(a[i]==a[i-1])
            {
                c++;
                if(c>f){
                    f=c;

                }
            }
            else{
               c=1;
            }
        }
        cout<<f<<endl;
    }
}
