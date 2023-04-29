#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,x,wf=0,wl=0,dr=0;
    cin>>a>>b;
    for(i=1;i<=6;i++){
        if(abs(i-a)<abs(i-b))
            wf++;
        else if(abs(i-a)>abs(i-b))
            wl++;
        else
            dr++;
    }
    cout<<wf<<" "<<dr<<" "<<wl<<endl;
    return 0;
}
