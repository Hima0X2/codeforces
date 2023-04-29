#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,i,n;
    cin>>d;
    int a[d];
    for(i=1; i<=d; i++)
    {
        cin>>a[i];
    }
    //cout<<a[d]<<endl;
    //n=a.length();
    for(i=1; i<=d; i++)
    {
         if((d==1)&&(a[d]!=15)&&(a[d]!=0))
    {
        cout<<"-1"<<endl;
        return 0;
    }
        if(a[d]==15)
        {
            cout<<"DOWN"<<endl;
            return 0;
        }
        else if(a[d]==0)
        {
            cout<<"UP"<<endl;
            return 0;
        }
        else if(a[d]>a[d-1])
        {
            cout<<"UP"<<endl;
            break;
        }
        else if(a[d]<a[d-1])
        {
            cout<<"DOWN"<<endl;
            break;
        }
    }
}
