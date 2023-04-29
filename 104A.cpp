#include<bits/stdc++.h>
using namespace std;
int main(){
     long long int n;
     cin>>n;
     if(n>=0&&n<=10)cout<<0<<endl;
     else if(n==11)cout<<4<<endl;
     else if(n>=12&&n<=19)cout<<4<<endl;
     else if(n==20)cout<<15<<endl;
     else if(n==21)cout<<4<<endl;
     else if(n>=22&&n<=25)cout<<0<<endl;
}
