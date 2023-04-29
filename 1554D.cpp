#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,i,n;
     cin>>t;
     while(t--){
          cin>>n;
        long long int p;
        string s;
       if(n%2)
        {
            if(n==1)
            {
                cout<<'a'<<endl;
                continue;

            }
            n=n-2;
            p=n/2;
            cout<<string(p,'a');
            cout<<'b'<<string(n-p,'a')<<'c'<<endl;
        }
        else
        {
            n--;
            p=n/2;
            cout<<string(p,'a')<<'b'<<string(n-p,'a')<<endl;


        }
     }
//std::cout << std::fixed << std::setprecision(2);
}


