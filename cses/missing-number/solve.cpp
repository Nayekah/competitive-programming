#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
    int a,b;
    ll x = 0;
    cin >> a;

    for(int i = 0; i < a-1; ++i){
        cin >> b;
        x += b;
    }
    cout << (1LL*a*(a+1) / 2) - x;
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