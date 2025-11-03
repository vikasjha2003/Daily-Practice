#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm_calc(ll a, ll b) {
    return a / __gcd(a,b) * b;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> a(n), b(m);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        ll cycle = lcm_calc(n, m);
        ll rem = k % cycle;

        for (ll i = 0; i < rem; i++) {
            if (a[i % n] > b[i % m])
                swap(a[i % n], b[i % m]);
        }

        for (auto x : a) cout << x << " ";
        cout << "\n";
        for (auto x : b) cout << x << " ";
        cout << "\n";
    }
}
