#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int p,t;
     cin>>t;
     while(t--){
          cin>>p;
          if(p==5){
               cout<<"2 4\n";
               continue;
          }
         cout<<2<<" "<<p/2<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}


