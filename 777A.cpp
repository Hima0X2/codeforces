#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0,c=0;
    cin>>n>>x;
    //if(n==x)cout<<"0"<<endl;retu
    sum=abs(x-n);
    while(sum)
    {
        if(sum%2==0)
        {
            c++;
            sum=sum/2;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
}
