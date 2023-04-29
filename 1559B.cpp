#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    string s;
    long long int t,n,i;
    cin>>t;
    while(t--)
    {
       long long int c=0;
        cin>>n;
        cin>>s;
        if(s[0]=='?'&&n>1)
            {
                if(s[1]=='B')
                {
                    s[0]='R';
                }
                else if(s[1]=='R')
                {
                    s[0]='B';
                }
            }
            else if(n==1&&s[0]=='?'){
               cout<<"R\n";
               continue;
            }
            else if(n==1&&s[0]!='?'){
               cout<<s<<endl;
               continue;
            }
            for(i=0;i<n;i++){
               if(s[i]=='?'){
                    c++;
               }
            }
            if(c==n){
              for(i=0;i<n;i++){
               if(i%2){
                    s[i]='R';
               }
               else{
                    s[i]='B';
               }
            }
            }
            else{
            for(i=1;i<n;i++){
               if(s[i]!='?'){
                         if(s[0]=='?'){
                    if((i+1)%2){
                         if(s[i]=='B'){
                         s[0]='B';
                    }
                    else{
                         s[0]='R';
                    }
               }
               else{
                         if(s[i]=='B'){
                         s[0]='R';
                    }
                    else{
                         s[0]='B';
                    }
               }
               }
               break;
            }
            }
            //cout<<i<<endl;
        for(i=1; i<n; i++)
        {
            if(s[i]=='?')
            {
                if(s[i]=='?')
                {
                    if(s[i-1]=='R')
                    {
                        s[i]='B';
                    }
                    else if(s[i-1]=='B')
                    {
                        s[i]='R';
                    }
                    if(s[i+1]=='R')
                    {
                        s[i]='B';
                    }
                    else if(s[i+1]=='B')
                    {
                        s[i]='R';
                    }
                }
            }
        }
            }
        cout<<s;
        cout<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}

