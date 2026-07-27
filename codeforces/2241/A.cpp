#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve() {
    int x,y;
    cin >> x >> y;

    if (x % y == 0) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return;
}


int main(){
    // for cpp primitives onl
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) solve();

    // g++ -O2 -Wall B.cpp -o B
    return 0;
}