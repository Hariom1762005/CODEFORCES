#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
   int n ; cin >> n;
    int ans = 0;
   int store;
   while( n != 0)
   {
        store = n%10;
        n /= 10;
        ans += 9;
   }
   cout << ans -9 + store << endl;
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





