#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> l(6);
	for (int i = 0 ; i < 6 ; i++) cin >> l[i];
	sort(l.begin(), l.end());

	     if (l[0] == l[3]) cout << (l[4] == l[5] ? "Elephant" : "Bear");
	else if (l[1] == l[4]) cout << "Bear";
	else if (l[2] == l[5]) cout << (l[0] == l[1] ? "Elephant" : "Bear");
	else cout << "Alien";
}
