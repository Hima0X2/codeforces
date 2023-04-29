/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
               long long int c=0,d=0,e=0;
    cin>>n;
    for(i=0;i<n;i++){
     cin>>a[i];
     if(a[i]%2){
       d++;
     }
     else{
          e++;
     }
    }
    if(n==1){
     cout<<0<<endl;
     continue;
    }
    if(abs(e-d)>1){
     cout<<-1<<endl;
     continue;
    }
    for(i=0;i<n-1;i++){
     if(a[i]%2==0){
        if(a[i+1]%2!=0){
          c++;
          swap(a[i],a[i+1]);
          i++;
        }
     }
     else{
        if(a[i+1]%2==0){
          swap(a[i],a[i+1]);
          c++;
          i++;
        }
     }
    }
    cout<<c<<endl;
     }
}
/// ALHAMDULILLAH



