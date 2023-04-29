#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
using namespace std;
#define ll long long
#define pb push_back
#define f(i,p,q) for(int i=p;i<q;i++)
#define vi vector<long long>v;
#define tc int t; cin>>t; while(t--)
//#define an long long n; cin>>n; long long a[n]; for(int i=0;i<n;i++) cin>>a[i];
int main()
{
  //freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    long long i,j,x,y,len,size;
     string s1,s2,s3;
     bool flag;
    // tc{
    // }
    cin>>s1>>s2>>s3;
    int len1,len2,len3;
    len1=s1.length(); len2=s2.length(); len3=s3.length();
    //cout<<len1<<" "<<len2<<" "<<len3;
    if(len3!=len1+len2)cout<<"NO\n";
    else
    {
      s1=s1+s2;
      vector<int>a(200,0); vector<int>b(200,0);
    // cout<<a[0]<<a[1]<<" "<<b[0]<<b[1];
      for(i=0;i<(len3);i++)a[s1[i]]++;
      // {
      //   if(a[s1[i]]==0)a[s1[i]]=s1[i];
      //   else
      // }
      for(i=0;i<(len3);i++)b[s3[i]]++;
      // {
      //   if(b[s3[i]]==0)b[s3[i]]++;
      // }
      for(i='A';i<='Z';i++)
      {
        //cout<<a[i]<<b[i]<<" ";
        if(a[i]!=b[i])
          {
            cout<<"NO\n";
            return 0;
          }
      }
      cout<<"YES\n";
     }
}
