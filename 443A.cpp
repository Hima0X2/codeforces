#include<bits/stdc++.h>
using namespace std;
int main()
{
     string s,b;
     getline(cin,s);
     int n,i,c=0,j;
     n=s.length();
     //cout<<n<<endl;
     sort(s.begin(),s.end());
     for(i=1,j=0;i<n;i++)
     {
          if(n==3){c=1;break;}
         if(s[i]>='a'&&s[i]<='z')
         {
              c++;
               if(s[i]==s[i-1]){
             c--;
              }
         }
     }
      cout<<c<<endl;
}
