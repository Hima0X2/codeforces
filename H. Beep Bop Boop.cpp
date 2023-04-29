#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,w,i,d,sum=0,c=1;
     string s[10000];
     cin>>t;
     while(t--){
          cin>>w;
          for(i=0;i<w;i++){
          cin>>s[i];
          }
          for(i=0;i<w;i++){
          if(s[i]=="BEEP"||s[i]=="BOOP"){
                cout<<"IT'S A BOP!\n";
         c=0;
               break;
          }
          }
          if(c){
           cout<<"IT'S NOT A BOP!\n";
          }
          c=1;
     }
}

