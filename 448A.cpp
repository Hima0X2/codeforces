#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,a2,a3,b1,b2,b3,n,N1,N2;
     cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
     //sum1=; sum2=;
     N1=(a1+a2+a3+4)/5; N2=(b1+b2+b3+9)/10;
      if(n==1&&(b1!=0||b2!=0||b3!=0)&&(a1!=0||a2!=0||a3!=0)){
          cout<<"NO"<<endl;
     }
     else if((N1+N2)>n){

      cout<<"NO"<<endl;
     }
     else{
          cout<<"YES"<<endl;
     }
}
