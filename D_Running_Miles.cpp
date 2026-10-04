#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n ; cin >> n ;
    vector < int >  v(n);
     vector < int >  premax(n);
     vector < int >  sufmax(n);
    for(int i=0; i<n; i++ )
    {
        cin >> v[i];
    }
    premax[0] = v[0];
    for(int i=1; i<n; i++ )
    {
        premax[i] = max ( premax[i-1], v[i]+i );
    }
    sufmax[n-1] = v[n-1] - n+1;
    for(int i=n-2; i>=0; i-- )
    {
        sufmax[i] = max ( sufmax [i+1], v[i]-i );
    }
    int ans = 0;

    for(int i=1; i<n-1; i++ )
    {
        ans = max (ans , premax[i-1] + v[i] + sufmax[i+1]  );
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



// aaa
// agaa
// bnbbabb
// aapp

