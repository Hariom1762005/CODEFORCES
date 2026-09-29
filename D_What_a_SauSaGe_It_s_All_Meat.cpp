#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
    // Write your solution here
    ll  n, q ;cin >> n >> q;
    
    vector<ll> v(n);
    vector<ll> ans;
    ll count=0;
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
        if(v[i] % 3==0 || v[i] % 5==0 ) count++;
    }
    ans.push_back( count ); 
    for(ll i=0; i<q; i++)
    {
        
        ll pos,x; cin >> pos >> x;
        if( v[pos-1] % 3==0 || v[pos-1] % 5==0 )
        count--;
        v[pos-1] = x;
        if( x % 3==0 || x % 5==0 )
        count++;
        ans.push_back( count ); 
    }
   for(ll i=0; i<=q; i++)
    {
       cout << ans[i] <<" ";
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

// 2 2 
// 2 2 2 3 
// 1 




