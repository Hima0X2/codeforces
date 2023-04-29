#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
string a;

int main()
{
    optimize();
    long long int n,i;
    cin>>n;
    while(n--)
    {
         //char ch;
        i=0;
        bool flag=false;
        cin>>a;
        int r=a.size()-1,l=0;
        //char ch='a';
       for(i=a.size()-1;i>=0;i--){
                char ch = 'a' + i;
          if(a[l]==ch){
               l++;
          }
          else if(a[r]==ch){
               r--;
          }
          else{
      flag=true;
      break;
          }
          ch++;
       }
        if(flag)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
    }
}


