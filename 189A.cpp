#include<bits/stdc++.h>
using namespace std;
int main(){
long long int n,a,b,c,k=0,i,j;
cin>>n>>a>>b>>c;
for(int i=0; i<=4000; i++){
        for(int j=0; j<=4000; j++){
               long long int z=n-(a*i)-(b*j);
        if(z<0){
          break;
        }
        double p=(double)z/(double)c;
        if(p==(long long int)p){
     k=max(k,i+j+(long long int)p);
        }
        }
}
   cout<<k<<endl;
}
