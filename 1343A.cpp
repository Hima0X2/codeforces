#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
     long long int k,x,i,j,a,sum=1;
     cin>>k;
     while(k--){
          cin>>a;
          for(j=2;;j=j*2){
               sum=sum+j;
               if(a%sum==0){
                    sum=a/sum;
                    break;
                    }
               }
               cout<<sum<<endl;
               sum=1;
          }
     }


