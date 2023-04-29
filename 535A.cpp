#include<bits/stdc++.h>
using namespace std;
int main()
{
    string n;
     cin>>n;
     int i=n.length();

       if(n[0]=='1'&&i==1)cout<<"one"<<endl;
       else if(n[0]=='0'&&i==1)cout<<"zero"<<endl;
     else if(n[0]=='2'&&i==1)cout<<"two"<<endl;
     else if(n[0]=='3'&&i==1)cout<<"three"<<endl;
     else if(n[0]=='4'&&i==1)cout<<"four"<<endl;
     else if(n[0]=='5'&&i==1)cout<<"five"<<endl;
     else if(n[0]=='6'&&i==1)cout<<"six"<<endl;
     else if(n[0]=='7'&&i==1)cout<<"seven"<<endl;
     else if(n[0]=='8'&&i==1)cout<<"eight"<<endl;
     else if(n[0]=='9'&&i==1)cout<<"nine"<<endl;
     else if(n[1]=='0'&&n[0]=='1')cout<<"ten"<<endl;
     else if(n[0]=='1'&&n[1]=='1')cout<<"eleven"<<endl;
     else if(n[1]=='2'&&n[0]=='1')cout<<"twelve"<<endl;
     else if(n[0]=='1')
     {
           if(n[1]=='3')cout<<"thirteen"<<endl;
     else if(n[1]=='4')cout<<"fourteen"<<endl;
     else if(n[1]=='5')cout<<"fifteen"<<endl;
     else if(n[1]=='6')cout<<"sixteen"<<endl;
     else if(n[1]=='7')cout<<"seventeen"<<endl;
     else if(n[1]=='8')cout<<"eighteen"<<endl;
     else if(n[1]=='9')cout<<"nineteen"<<endl;
     }
     else if(n[0]=='2')
     {
          cout<<"twenty";
            if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
     else if(n[0]=='3')
     {
          cout<<"thirty";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
     else if(n[0]=='4')
     {
          cout<<"forty";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
     else if(n[0]=='5')
     {
          cout<<"fifty";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
     else if(n[0]=='6')
     {
          cout<<"sixty";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
     else if(n[0]=='7')
     {
          cout<<"seventy";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
      else if(n[0]=='8')
     {
          cout<<"eighty";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
      else if(n[0]=='9')
     {
          cout<<"ninety";
             if(n[1]=='1')cout<<"-one"<<endl;
     else if(n[1]=='2')cout<<"-two"<<endl;
     else if(n[1]=='3')cout<<"-three"<<endl;
     else if(n[1]=='4')cout<<"-four"<<endl;
     else if(n[1]=='5')cout<<"-five"<<endl;
     else if(n[1]=='6')cout<<"-six"<<endl;
     else if(n[1]=='7')cout<<"-seven"<<endl;
     else if(n[1]=='8')cout<<"-eight"<<endl;
     else if(n[1]=='9')cout<<"-nine"<<endl;
     else if(n[1]=='0')cout<<endl;
     }
}
