#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


// 3 2 5 1 7
// 3 3(+1) 5 5(+4) 7
void solve(){
    int n;
    cin >> n;
    vl v(n);

    ll res = 0;
    for (int i = 0; i < n; ++i) cin >> v[i];
    for (int i = 1; i < n; ++i){
        if (v[i] < v[i-1]){
            ll step = (v[i-1] - v[i]);
            res += step;
            v[i] = v[i-1];
        }
    }

    cout << res << endl;
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