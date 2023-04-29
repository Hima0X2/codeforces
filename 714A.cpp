#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (r2 < l1 || r1 < l2) {
        cout << 0;
    } else {
       long long int l = max(l1, l2);
        long long int r = min(r1, r2);
        long long int ans = r-l+1;
        if (l <= k && k <= r) {
            ans--;
        }
        cout << ans;
    }
    return 0;
}
