/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long int t,i,n,k,j;
    string s;
    cin>>t;
    be:
    while(t--)
    {
        cin>>k>>s;
        string p=s;
        if(k==1){
          cout<<k<<endl;
          cout<<s<<endl;
          continue;
        }
        for(i=0;i<k;i++){
          if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
              cout<<1<<endl;
              cout<<s[i]<<endl;
              goto be;
          }
        }
        if(k==2){
           cout<<k<<endl;
          cout<<s<<endl;
          continue;
        }
        sort(p.begin(),p.end());
         for(i=1;i<k;i++){
               if(p[i]==p[i-1]){
                  cout<< 2 << endl;
          cout<<p[i] << p[i] <<endl;
          goto be;
               }
        }
         for(i=1;i<k;i++){
              if(s[i]=='2'||s[i]=='5'){
               cout<<2<<endl;
               cout<<s[0]<<s[i]<<endl;
               goto be;
              }
         }
        for(i=0;i<k;i++){
          if(s[i]=='2'||s[i]=='5'){
               for(j=i+1;j<k;j++){
                    if(s[j]=='7'){
                         cout<<2<<endl;
                         cout<<s[i]<<s[j]<<endl;
                         goto be;
                    }
               }
          }
        }
        cout<<k<<endl;
        cout<<s<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



