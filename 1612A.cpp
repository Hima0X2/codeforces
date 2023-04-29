/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if((x+y)%2==0){
               if(x==0){
                    cout<<0<<" "<<y/2<<endl;
               }
               else if(y==0){
                    cout<<x/2<<" "<<0<<endl;
               }
               else if(x>y){
                cout<<(x+y)/2<<" "<<0<<endl;
               }
               else{
                    cout<<0<<" "<<(x+y)/2<<endl;
               }
        }
        else{
          cout<<-1<<" "<<-1<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




