insert("/// BISMILLAHIR RAHMANIR RAHIM
insert("#include<bits/stdc++.h>
insert("using namespace std;
insert("#define endl '\n'
insert("#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
insert("#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
insert("long long int lcm(long long int a,long long b){
insert("         return a*(b/__gcd(a,b));
insert("    }
insert("const long long int mx = 1e7+123;
insert("long long int a[mx];
insert("
insert("int main()
insert("{
insert("     optimize();
insert("    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
insert("     long long int t,i,n;
insert("     cin>>t;
insert("     while(t--){
insert("string s;
insert("    cin >> s;
insert("    map<char, vector<int>> pos;
insert("    for (int i = 0; i < (int) s.size(); i++) {
insert("        pos[s[i]].push_back(i);
insert("    }
insert("    char a = s[0], b = s.back();
insert("    cout << abs(a - b) << " ";
insert("    vector<int> ans;
insert("    while (1) {
insert("        for (auto i : pos[a]) {
insert("            ans.push_back(i);
insert("        }
insert("        if (a < b) {
insert("            a++;
insert("        } else if (a > b) {
insert("            a--;
insert("        } else {
insert("            break;
insert("        }
insert("    }
insert("    cout << (int) ans.size() << '\n';
insert("    for (auto i : ans) {
insert("        cout << i + 1 << " ";
insert("    }
insert("    cout << '\n';
insert("     }
insert("//std::cout << std::fixed << std::setprecision(2);
insert("}
insert("/// ALHAMDULILLAH
insert("
insert("
insert("
insert("
insert("