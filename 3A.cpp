#include<bits/stdc++.h>
using namespace std;
int main()
{
     string a,b;
     int c=0;
     cin>>a>>b;
     cout<<max(abs(int(a[0])-int(b[0])),abs(a[1]-b[1]))<<endl;
     while(a!=b){
               c++;
          if (a[0] < b[0])
        {
            cout << "R";
            a[0] ++;
        }
        else if (a[0] > b[0])
        {
            cout << "L";
            a[0] --;
        }
      if (a[1] < b[1])
        {
            cout << "U";
            a[1] ++;
        }
        else if (a[1] > b[1])
        {
            cout << "D";
            a[1] --;
        }
        cout << endl;

     }
     // cout<<c<<endl;
}
