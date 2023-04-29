#include<cstdio>
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<cstring>
#include<string>
#include<climits>
#include<cmath>
#include<algorithm>
#include<queue>
#include<vector>
#include<stack>
#include<set>
#include<map>
using namespace std;
int main()
{
    int n,a[105];
    while(~scanf("%d",&n))
    {
        int i;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        sort(a,a+n);
        printf("1 %d\n",a[0]);
        if(a[n-1]>0)
        {
            printf("1 %d\n",a[n-1]);
            printf("%d %d",n-2,a[n-2]);
            for(i=1; i<n-2; i++)
                printf(" %d",a[i]);
            printf("\n");
        }
        else
        {
            printf("2 %d %d\n",a[1],a[2]);
            printf("%d %d",n-3,a[n-1]);
            for(i=3; i<n-1; i++)
                printf(" %d",a[i]);
            printf("\n");
        }
    }
    return 0;
}
