#include<bits/stdc++.h>
using namespace std;
int main()
{
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     for(int i=0;;i++){
               for(int j=0;;j++){
                if(b+a*j==d+c*i){
          cout<<b+a*j<<endl;
         return 0;
         }
               }
     }

}
