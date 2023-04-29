#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long int i,j,sum=0,ans=0,q=9,Q=9,r=5,b=3,k,p=1,n=3,R=5,B=3,K,P=1,N=3;
     string s;
     for(j=0;j<8;j++){
     cin>>s;
     for(i=0;i<s.length();i++){
        if(s[i]=='.'){continue;}
        else if(s[i]=='Q'){
          ans=ans+9;
        }
        else if(s[i]=='R'){
          ans=ans+5;
        }
        else if(s[i]=='B'){
          ans=ans+3;
        }
        else if(s[i]=='P'){
          ans=ans+1;
        }
        else if(s[i]=='K'){
          ans=ans+0;
        }
        else if(s[i]=='N'){
          ans=ans+3;
        }
        else if(s[i]=='q'){
          sum=sum+9;
        }
        else if(s[i]=='r'){
          sum=sum+5;
        }
        else if(s[i]=='b'){
          sum=sum+3;
        }
        else if(s[i]=='p'){
          sum=sum+1;
        }
        else if(s[i]=='k'){
          sum=sum+0;
        }
        else if(s[i]=='n'){
          sum=sum+3;
        }
     }
     }
     //cout<<sum<<" "<<ans<<endl;
     if(sum>ans){
          cout<<"Black"<<endl;
     }
     else if(sum<ans){
               cout<<"White"<<endl;
     }
     else{
          cout<<"Draw"<<endl;
     }
}
