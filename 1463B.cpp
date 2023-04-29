#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100000],t,j,sum=0,sub=0;
    cin>>t;
    while(t--){
     cin>>n;
     long long int ev=0,od=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		if(i%2==0)
    			od+=arr[i];
    		else
    			ev+=arr[i];
    	}
    	if(od>ev)
    	{
    		for(int i=0;i<n;i++)
    		{
    			if(i%2==0)
    				cout<<arr[i]<<' ';
    			else
    				cout<<1<<' ';
    		}
    	}
    	else
    	{
    		for(int i=0;i<n;i++)
    		{
    			if(i%2==0)
    				cout<<1<<' ';
    			else
    				cout<<arr[i]<<' ';
    		}
    	}
    	cout<<endl;
    }
}
