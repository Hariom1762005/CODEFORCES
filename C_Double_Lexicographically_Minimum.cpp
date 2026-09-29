#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
    
    string s; cin>>s;
    int n = s.size();
     string ans (n , ' ');
     
     sort( all(s) );
     
     int left = 0, right = n-1;
     int i=0;
     while(i< n-1 && s[i] == s[i+1])
     {
         ans[ left++ ] = s[i++];
         ans[ right-- ] = s[i++];
     }
     
     if(i< n-1 && s[i+1] != s[n-1] )
     {
         ans[ right-- ] = s[i++];
         ans[ left++ ] = s[i++];
         
         while(i<n)
         {
             ans[ left++ ] = s[i++];
         }
     }
     else if( i< n-1 && s[i+1] == s[n-1])
     {
         swap( s[i], s[n-1] );
        while(i< n-1 && s[i] == s[i+1])
         {
             ans[ left++ ] = s[i++];
             ans[ right-- ] = s[i++];
         }
        if(i<n) ans[ left++ ] = s[ i++ ];
     }
      if(i<n) ans[ left ] = s[ i++ ];
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

// a
// aba
// bab
// bca
// abba
// abbba
// ababa
// bbab
// bbabb
// bbcca
// agea
// acffba





