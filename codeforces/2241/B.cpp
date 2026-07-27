#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;



int ctlen(ll x) {
    int ct = 0;
    while (x > 0){
        x /= 10;
        ct++;
    }
    return ct;
}

void solve(){
    ll x;
    cin >> x;

    int len = ctlen(x);
    if (len == 1) cout << "11" << "\n";
    else {
        cout << "1";
        for (int i = 1; i < len; ++i) cout << "0";
        cout << "1" << '\n';
    }

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