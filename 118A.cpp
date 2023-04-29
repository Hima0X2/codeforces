#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
     int i,j;
    scanf("%s",&s);
    //65,69,105,73,79,85,97,101,111,117
    int f=strlen(s);
    for(i=0;i<f;i++){
    if(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'&&s[i]!='Y'&&s[i]!='y'&&s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
     {
          if(s[i]<='Z')s[i]=s[i]+32;
        printf(".%c",s[i]);
          //d[j]=s[i];
     }
    }
    //sint t=d.length();
     return 0;
}
