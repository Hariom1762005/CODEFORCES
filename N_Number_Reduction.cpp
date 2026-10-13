#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);





void solve() {
     
    string s; cin >> s;
    int k ; cin >> k ;
    int n = s.size();
    string ans; 
    int p = 0;
        for (int i = 1; i <= k; i++) {
            if (s[i] != '0' && (s[p] == '0' || s[i] < s[p])) p = i;
        }
        k -= p;

    ans.push_back( s[p] );
    for( int i = p+1 ; i < n; i++)
    {
       while(ans.size() > 1 && k > 0 && ans.back() > s[i]   )
       {
            //if( s[i] == '0' && ans.size() == 1)break;
            ans.pop_back();
            k--;
            
       }
       ans.push_back( s[i] );
    }
    
    while( k > 0)
    {
        ans.pop_back();
        k--;
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





