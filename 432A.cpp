#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,cnt=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(5-a[i]>=k){
            cnt++;
        }
    }
    printf("%d\n",cnt/3);
    return 0;
}
