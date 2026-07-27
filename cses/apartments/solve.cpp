#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve(){
    int n,m;
    cin >> n >> m;

    ll k;
    cin >> k;

    vl vn(n), vm(m);
    for (int i = 0; i < n; ++i) cin >> vn[i];
    for (int j = 0; j < m; ++j) cin >> vm[j];
    sort(vn.begin(), vn.end());
    sort(vm.begin(), vm.end());

    int i = 0, j = 0, ans = 0;
    while (i < n && j < m) {
        if (abs(vn[i] - vm[j]) <= k) {
            i++;
            j++;
            ans++;
        } else {
            if (vm[j] - vn[i] > k) i++;
            else j++;
        }
    }

    cout << ans;
    return;
}


int main(){
    // for cpp primitives onl
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    // g++ -O2 -Wall solve.cpp -o solve
    return 0;
}