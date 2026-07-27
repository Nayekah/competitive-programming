#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve() {
    int n;
    ll x;
    cin >> n >> x;

    vl v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int i = 0, j = n-1, ans = 0;
    vi seen(n, 0);

    while (i < j){
        if (v[i] + v[j] > x) j--;
        else {
            ans++;
            seen[i] = 1;
            seen[j] = 1;
            i++;
            j--;
        }
    }

    for (int i = 0; i < n; ++i){
        if (seen[i] == 0) ans++;
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