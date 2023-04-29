#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int decimalToBinary(long long int n){
    int remainder;
    long long int binary = 0, i = 1;
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary=binary+(remainder*i);
        i = i*10;
    }
    return binary;
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,n,k,i;
     cin>>t;
     while(t--){
               long long int and=0,or=0;
          cin>>n>>k;
long long int j=pow(2,n);
    for(i=0; i<j; i++)
    {
       long long int p=decimalToBinary(i);
       string s=to_string(i);

    }
     }
//std::cout << std::fixed << std::setprecision(2);
}


