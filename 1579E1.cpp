/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];
check(long long int a,long long int b){

}
int main()
{
     optimize();
     long long int t,i,n,x;
     cin>>t;
     while(t--){
cin>>n;
for(i=0;i<n;i++){
     cin>>a[i];
}
deque<long long int> d;
      for(i=0;i<n;i++){
               if(d.size()==0){
                     d.push_front(a[i]);
               }
         else if(a[i]<d.front()){
           d.push_front(a[i]);
         }
         else{
           d.push_back(a[i]);
         }
      }
      deque <long long int> :: iterator it;
      for (it = d.begin(); it != d.end(); ++it){
        cout << *it<<" ";
      }
    cout << '\n';
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




