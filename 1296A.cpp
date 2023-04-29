#include<bits/stdc++.h>
using namespace std;
int main()
{
  int j,a,n,i,c,x,y,b,e,o;
 cin>>n;
    for(i=1;i<=n;i++){
       cin>>a;
        o=0;
        e=0;
          for(j=1;j<=a;j++){
cin>>b;
         if(b%2==1){
            o++;
               }
             else
            e++;
        }
    if(o>0 && e>0 || o>0 && a%2==1)
    printf("YES\n");
    else
    printf("NO\n");
    }

}
