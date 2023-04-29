#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d;
    string s;
    cin>>s;
    a=s.find("AB");
    b=s.find("BA",a+2);
    c=s.find("BA");
    d=s.find("AB",c+2);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    if(a != -1 && b != -1 || c!=-1 &&  d!=-1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
