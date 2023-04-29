#include<bits/stdc++.h>
using namespace std;
int main()
{
      int m,s,i,a,b,c,d;
     cin>>m>>s;
     if(s==0){
          if(m==1){
               cout<<"0 0"<<endl;
     }
     else{
         cout<<"-1 -1\n";
     }
     }
     else{
          string mx,mn;
          for(i=0;i<m;i++){
               a=min(s,9);
               s=s-a;
               mx.push_back('0'+a);
          }
          if(s>0){
              cout<<"-1 -1\n";
          }
          else{
                    int j=0;
               for(i=m-1;i>=0;i--){
                   mn.push_back(mx[i]);
               }
               while(mn[j]=='0'){
                    j++;
               }
               mn[0]++;
               mn[j]--;
               cout<<mn<<" "<<mx<<endl;
          }
     }

}
