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
   vector <int > v(n);
   for( int i = 0; i < n ; i++)cin >> v[i];
   int mini = v[0] ; int maxi = v[0]; int ans = v[0];
    for( int i = 1; i < n ; i++)
    {
        ans = max(ans , v[i] + max( abs(maxi) , abs(mini) ) );
        int temp_max = max({ v[i] , v[i] +  maxi , v[i] + 2 * maxi});
        int temp_min = min({ v[i] , v[i] +  mini , v[i] + 2 * mini});
        maxi = temp_max;
        mini = temp_min;
    }
   
   cout << ans << endl;
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





