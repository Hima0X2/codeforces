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
long long int i,c=0,x=0;
cin>>s;
for(i=0;i<s.size();i++){
     if(s[i]=='('){
          c++;
        }
     else if(s[i]==')'){
               if(c==0){
                    c=0;
               }
               else{
                    c--;
                    x++;
               }
        }
}
cout<<x*2<<endl;
}


