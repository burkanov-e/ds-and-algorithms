#include <bits/stdc++.h>

template <typename C>
int sz(const C &c) { return static_cast<int>(c.size()); }

using namespace std;

int main() {
    iostream::sync_with_stdio(false);

    unordered_map<int, int> mp;
    vector<int> v;

    for (int x; cin >> x;) {
        if (mp[x] == 0) {
            v.push_back(x);
            mp[x] = 1;
        } else {
            mp[x]++;
        }
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " " << mp[v[i]] << endl;
    }
}