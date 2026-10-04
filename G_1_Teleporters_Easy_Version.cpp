#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
     int n, coins; cin >> n >> coins ;
     vector <int> v(n);
     for(int i=0; i<n; i++ ) { int x ; cin >> x ; v[i] = x+i+1; }
        sort(v.begin(), v.end());
        
        for(int i=1; i<n; i++ )
        {
            v[i] = v[i] + v[i-1];
        }
        int idx = upper_bound(v.begin(), v.end(), coins ) - v.begin();
        cout << idx << endl;
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    
    int t = 1;
    cin >> t;

   
    while (t--)
    {
        solve();
    }

    return 0;
}



// aaa
// agaa
// bnbbabb
// aapp

