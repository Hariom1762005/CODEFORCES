#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
     string s; cin >> s ;
        int n = s.size();
    string a = "hello";
     int i=0; int j=0;
     while( i<n && j<5 )
    {
        if( s[i] == a[j] )
        {
            j++;
        }
        i++;
    }
    if( j == 5 )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
        
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



// aaa
// agaa
// bnbbabb
// aapp

