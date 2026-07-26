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

    if (n == 1) cout << n << endl;
    else if (n <= 3) cout << "NO SOLUTION" << endl;
    else {
        int fi = n;
        int se = n-1;

        cout << se;
        se -= 2;

        while (se > 0){
            cout << " " << se;
            se -= 2;
        }
        while (fi > 0){
            cout << " " << fi;
            fi -= 2;
        }
    }

    cout << endl;
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