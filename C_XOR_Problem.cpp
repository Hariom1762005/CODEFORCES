#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
   int n  ; cin >> n ;
   cout << 2 * n + 1 << endl;
    cout <<"1 ";
    for( int i = 1 ; i < n ; i++)
    {
        cout << i +1 << " " << i << " "  ;
    }

   cout << endl;
   
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





