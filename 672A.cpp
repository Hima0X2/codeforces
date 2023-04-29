#include <iostream>
#include <string>
using namespace std;
int main(){
     int n;
     string a;
    cin >> n;
    for (int i = 1; i <= n; i++)
     {
        a =a+ to_string(i);
    }
    cout << a[n - 1];
}
