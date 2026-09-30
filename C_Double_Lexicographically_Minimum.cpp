#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
    
    int n , k ; cin >> n >> k;
    vector <pair < int , int> > v(n);
    
   
    for( int i = 0; i<n; i++ ) 
    {
        cin >> v[i].first ; 
        cin >> v[i].second ;
    }
    
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
    return a.second < b.second;
});
    multiset<int> s;

    for (int i = 0; i < k; i++)
    s.insert(0);

    
    int count = 0;
    
    for( int i = 0; i<n; i++ ) 
    {
        auto it = s.upper_bound(v[i].first);
        
        if (it != s.begin())
        {
            --it;
        
            s.erase(it);
            s.insert(v[i].second);
        
            count++;
        }
    }
    
    cout << count << endl;
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







