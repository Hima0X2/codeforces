#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l,r,i,c,x;
   cin>>l>>r;
   for(i=l;i<=r;i++){
     x=i;
     c=0;
     set<int> s;
     while(x){
          s.insert(x%10);
          x=x/10;
          c++;
     }
          if(s.size()==c){
               cout<<i<<endl;
               return 0;
          }
     }

   cout<<-1<<endl;
}

