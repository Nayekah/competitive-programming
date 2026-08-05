#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve(ll k) {
    ll ans;
    ans = ((k*k) * (k*k-1)) / 2 - (4 * (k - 1) * (k - 2));

    cout << ans << "\n";
    return;
}


int main() {
    // for cpp primitives onl
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for (int i = 1; i < n + 1; ++i) solve(i);

    // g++ -O2 -Wall solve.cpp -o solve
    return 0;
}