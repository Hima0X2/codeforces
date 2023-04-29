#include<bits/stdc++.h>
using namespace std;
int main()
{
     //1s, 2s, 2p, 3s, 3p, 4s, 3d, 4p, 5s, 4d, 5p, 6s, 4f, 5d, 6p, 7s, 5f, 6d, 7p
     int t,a;
     cin>>t;
     back:
     while(t--){
          cin>>a;
          if(a-2<=0){
                     cout<<"1s^"<<a<<"\n";
                     goto back;
          }
          else{
               a=a-2;
          }
          if(a-8<=0){
               if(a==1||a==2){
                    cout<<"2s^"<<a<<"\n";
                     goto back;
               }
               else{
                    cout<<"2p^"<<a-2<<"\n";
                     goto back;
               }
          }
          else{
               a=a-8;
          }
          if(a-8<=0){
                if(a==1||a==2){
                    cout<<"3s^"<<a<<"\n";
                     goto back;
               }
               else if(a>=3&&a<=6){
                    cout<<"3p^"<<a-2<<"\n";
                     goto back;
               }
          }
          else{
                    if(a==9){
                         cout<<"4s^1\n";
                          goto back;
                    }
                    else if(a==10){
                         cout<<"4s^2\n";
                          goto back;
                    }
                    a=a-10;
               }
         if(a-10<=0){
               if(a==4||a==9){
                     cout<<"3d^"<<a+1<<"\n";
                      goto back;
               }
               else{
          cout<<"3d^"<<a<<" \n";
           goto back;
               }
         }
         a=a-10;
        if(a-6<=0){
          cout<<"4p^"<<a<<" \n";
           goto back;
        }
        a=a-6;
        if(a-2<=0){
          cout<<"5s^"<<a<<" \n";
           goto back;
        }
        a=a-2;
        if(a-10<=0){
               if(a==4||a==9){
                     cout<<"4d^"<<a+1<<"\n";
                      goto back;
               }
               else{
          cout<<"4d^"<<a<<"\n";
          goto back;
               }
     }
     a=a-10;
       if(a-6<=0){
          cout<<"5p^"<<a<<"\n";
           goto back;
        }
        a=a-6;
        if(a-2<=0){
          cout<<"6s^"<<a<<"\n";
           goto back;
        }
        a=a-2;
        if(a-14<=0){
           cout<<"4f^"<<a<<"\n";
            goto back;
        }
        a=a-14;
        if(a-10<=0){
          cout<<"5d^"<<a<<"\n";
           goto back;
        }
        a=a-10;
        if(a-6<=0){
           cout<<"6p^"<<a<<"\n";
            goto back;
        }
        a=a-6;
        if(a-2<=0){
           cout<<"7s^"<<a<<"\n";
        }
        a=a-2;
         if(a-14<=0){
           cout<<"5f^"<<a<<"\n";
            goto back;
        }
        a=a-14;
        if(a-10<=0){
          cout<<"6d^"<<a<<"\n";
           goto back;
        }
        a=a-10;
        if(a-6<=0){
           cout<<"7p^"<<a<<"\n";
            goto back;
        }
        else{
          cout<<"93591dzil31704\n";
           goto back;
        }
}
}
