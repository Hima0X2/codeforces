#include<bits/stdc++.h>
using namespace std;
    int main()
{
  int a,b,a1,ans;
  scanf("%d%d",&a,&b);
  a1=0;
  ans=0;
  while (a>0)
  {
    ans+=a;
    a1+=a;
    a=0;
    a+=a1/b;
    a1%=b;
  }
  printf("%d\n",ans);
  return 0;
}
