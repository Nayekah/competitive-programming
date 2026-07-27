#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;


void solve(){
    int n;
    cin >> n;
    vl v(n);

    for (int i = 0; i < n; ++i) cin >> v[i];
    sort(v.begin(), v.end());

    int ct = 1;
    for (int i = 1; i < n; ++i){
        if (v[i] != v[i-1]) ct++;
    }

    cout << ct;
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