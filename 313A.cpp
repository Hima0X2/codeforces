#include <iostream>
using namespace std;

int main() {
long long int n,d,o,p,q,m;
cin>>n;
if(n>=0){cout<<n<<endl;}
else{
    //d=log10(n)+1;
    m=n/10;
    o=n%10;
    p=n/100;
    q=(p*10)+o;
    if((m>q)&&(m>n)){
        cout<<m<<endl;
    }
    else if((q>=m)&&(q>n)){
        cout<<q<<endl;
    }
}
    return 0;
}
