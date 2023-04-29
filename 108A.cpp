#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,m1;
    char ch;
    cin>>h>>ch>>m;
    m1=(h%10)*10+h/10;
    if(m1>m&&m1<60)
    {
                 printf("%.2d:%.2d",h,m1);
    }
    else if(h==23)
    {
        cout<<"00:00"<<endl;
    }
    else
    {
        if(h>=5&&h<10)
        {
            h=10;
        }
        else if(h>=15&&h<20)
        {
            h=20;
        }
        else
        {
            h=h+1;
        }
        m=(h%10)*10+h/10;
          printf("%.2d:%.2d",h,m);
    }
}
