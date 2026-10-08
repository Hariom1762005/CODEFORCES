#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n; cin >> n;
    
    vector < int > v (n);
    for( int i = 0 ;i < n ; i++)
    cin >> v[i];
    int ans = 0; 

   map< int, int > count;
    vector<int> scoreeven;
    for (int i = 0; i + 4 < n; i += 2)
    scoreeven.push_back(v[i] + v[i + 2] - v[i + 4]);

    
    for (int i = 0; i < scoreeven.size(); i++) {
        if (i >= 3) count[scoreeven[i - 3]]++;   
        ans += count[scoreeven[i]];              
    }

     map< int, int > count2;
    vector<int> scoreodd;
    for (int i = 1; i + 4 < n; i += 2)
    scoreodd.push_back(v[i] + v[i + 2] - v[i + 4]);

    
    for (int i = 0; i < scoreodd.size(); i++) {
        if (i >= 3) count2[scoreodd[i - 3]]++;   
        ans += count2[scoreodd[i]];              
    }


     map < int , int > alleven;

    for(int i = 0 ; i < n ; i += 2)
    {
        if( i+4 >= n) break;
        alleven[ v[i] + v[i+2] - v[i+4]]++;
    }

    map < int , int > allodd;

    for(int i = 1 ; i < n ; i += 2)
    {
        if( i+4 >= n) break;
        allodd[ v[i] + v[i+2] - v[i+4]]++;
    }

     for( auto x : alleven)
    {
        ans +=  allodd[ x.first ] * x.second ;
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





