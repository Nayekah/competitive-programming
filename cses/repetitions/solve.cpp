#include <bits/stdc++.h>
using namespace std;

// typedef
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;


void solve(){
    string s;
    cin >> s;

    int maxi = 1, ct = 1;
    for (int i = 1; i < s.size(); ++i){
        if (s[i] == s[i-1]) ct++;
        else ct = 1;
        maxi = max(maxi, ct);
    }

    cout << maxi << endl;
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