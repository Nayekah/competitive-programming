#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
    ll n;
    cin >> n;

    cout << n;
    while (n != 1){
        if (n % 2 == 0) n /= 2;
        else n = (n*3) + 1;
        cout << " " << n;
    }
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