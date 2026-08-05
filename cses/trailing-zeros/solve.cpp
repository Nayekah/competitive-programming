#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve() {
    ll n;
    cin >> n;

    int ans = 0;
    while (n > 0) {
        n /= 5;
        ans += n;
    }

    cout << ans;
    return;
}


int main() {
    // for cpp primitives onl
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    // g++ -O2 -Wall solve.cpp -o solve
    return 0;
}