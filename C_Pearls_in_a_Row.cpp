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
    vector < int > v(n) ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> v[i] ;
    }
    vector < pair < int , int > >  ans;

    for ( int i = 0 ; i < n ; i++ )
    {
       int start = i;
        set < int > s;
        s.insert( v[i] );
        int count = 1;
        while(i < n && s.size() == count)
        {
            i++; count++;
            if( i < n)s.insert(v[i]);

        }
        if( i != n)
        {
            int end = i ;
            ans.push_back( {start, end} );
        }    
    }
    
    if( ans.empty() )cout << "-1" << endl;
    else
    {
        ans[ans.size() -1 ].second = n-1;
        cout << ans.size() << endl;
        for( int i = 0 ; i < ans.size() ; i++ )
        cout << ans[i].first+1 << " " << ans[i].second+1 << endl;
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





