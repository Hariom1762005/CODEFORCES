#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n;
    cin >> n;
    vector <pair < int, int> > v;
    int ans = 0;

    for(int i=0 ; i<n ; i++)
    {
        string str; cin >> str;
        int counts=0 , counth=0;
        for(int i=0 ; i<str.size() ; i++)
        {
            if( str[i] == 's')counts++;
            else
            {
                counth++;
                ans += counts;
            } 
        }

        v.push_back( { counts  ,counth});
    }

    sort( v.rbegin(), v.rend(), [&](auto &x, auto &y){
        if(x.first > y.first) return true;
        else if(x.first == y.first){
            return x.second < y.second;
        }
        else return false;
    });
   
    int scount = v[0].second;

    for( int i = 1; i < v.size() ; i++)
    {
        ans+= scount * v[i].first;
        scount += v[i].second;
    }

    cout << ans << endl;

}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    
    
    
    int t = 1;
   // cin >> t;

   
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

