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

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    double t,i,n,x1,x2,y1,y2;
     cin>>x1>>y1>>x2>>y2;
     long long int b=abs(x2-x1)*abs(y2-y1);
     if(x1==x2||y1==y2){
          cout<<-1<<endl;
     }
     else{
     cout<<b<<endl;
     }
    // double sum=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))/2.0;
//     long long int sum1=sum;
//     //cout<<sum1<<" "<<sum<<endl;
//     if(sum==sum1){
//          cout<<sum<<endl;
//     }
//     else{
//          cout<<-1<<endl;
//     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




