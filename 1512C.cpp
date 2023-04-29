#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int t,a,b,j,i;
     cin>>t;
     while(t--){
          long long int c=0,d=0,p,q;
          cin>>a>>b;
      p=a;
      q=b;
          string s;
          cin>>s;
          bool flag=true;
          long long int x=s.size();
          if(x==1&&s[0]=='?'){
               if(a==1){cout<<0<<endl;}
               else if(b==1){cout<<1<<endl;}
               continue;
          }
          else if(x==1&&(a==1&&s[0]=='1'||b==1&&s[0]=='0')){
               cout<<-1<<endl;
               continue;
          }
          //cout<<x/2<<endl;
          for(i=0;i<x/2;i++){
                    //2 15
//101011011?11?1111
               j=x-i-1;
               //cout<<s[i]<<" "<<s[j]<<endl;
               if(s[i]=='?'&&s[j]=='?'){
                    continue;
               }
               else if(s[i]=='?'){
                    s[i]=s[j];
               }
               else if(s[j]=='?'){
                    s[j]=s[i];
               }
                else if(s[i]!=s[j]){
                    flag=false;
                    goto be;
               }
               if(s[i]=='1'){
                    b=b-2;
               }
               else if(s[i]=='0'){
                    a=a-2;
               }
          }
          if(a<0||b<0){
               flag=false;
               goto be;
          }
         //cout<<a<<" "<<b<<endl;
          //cout<<flag<<endl;
          if(x%2){
       if(a>=1){s[x/2]='0';}
       else if(b>=1){s[x/2]='1';}
       else{
            flag=false;
                   goto be;
       }
     }
           for(i=0;i<x/2;i++){
                if(s[i]=='?'){
                     j=x-i-1;
                    if(a>1){
                    s[i]='0';
                    s[j]='0';
                    a=a-2;
                    }
                    else if(b>1){
                              s[i]='1';
                    s[j]='1';
                    b=b-2;
                    }
                    else{
                        flag=false;
                   goto be;
                    }
                }
           }
     //cout<<flag<<endl;
     //cout<<x/2<<endl;
     //cout<<flag<<endl;
//101011011?11?1111
     for(i=0;i<x;i++){
          if(s[i]=='0'){
               c++;
          }
          else{
               d++;
          }
     }
     if(!(c==p&&d==q)){
        flag=false;
     }
     //cout<<flag<<endl;
     //cout<<a<<" "<<b<<endl;
     be:
     if(!flag){
          cout<<-1<<endl;
     }
     else{
          cout<<s<<endl;
     }
     }
}
