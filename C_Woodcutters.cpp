#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    int n ; 
    cin >> n ;
    vector < pair < int ,int > > v (n);
    for( int i = 0 ;  i < n ; i++ )
    {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    int occupied_till = LLONG_MIN;  
    int ans = 0;
    v.push_back({LLONG_MAX , 0});
    for( int i = 0 ; i < n ; i++)
    {
        if(occupied_till < v[i].first - v[i].second)
        {
            occupied_till = v[i].first;
            ans++;
        }
        else if( v[i].first + v[i].second < v[ i+1 ].first )
        {
            occupied_till = v[i].first + v[i].second;
            ans++;
        }
        else occupied_till = v[i].first;
    }

    cout << ans << endl;
    
}
 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    //cin >> t;

   
    while (t--)
    {
        solve();
    }

    return 0;
}





