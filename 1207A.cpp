/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
     long long int t,n,a,b,pa, pb;
     cin>>t;
     while(t--){
               long long int sum=0;
          cin >> n >> a >> b;
		cin >> pa >> pb;
		n = n / 2;
		if (n >= (a + b))
			cout << a * pa + b * pb << endl;
		else
		{
			if (pb > pa)
			{
				if (n <= b)
					cout << n * pb << endl;
				else
					cout << (pb * b) + (n - b) * pa << endl;
			}
			else
			{
				if (n <= a)
					cout << n * pa << endl;
				else
					cout << (pa * a) + (n - a) * pb << endl;
			}
		}
	}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH


