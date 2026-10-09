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
   vector < int > v(n);
   int count2 = 0;
   for( int i = 0; i < n ; i++) cin >> v[i]; 

   sort ( all (v) );
   if( v[0] == v[n-1] )cout << "NO";
   else{

    cout << "YES" << endl;
    cout << v[0] << " ";
    for( int i = n-1 ; i >= 1 ; i--) cout << v[i] << " ";
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





