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
    int sizea = 1 , sizeb = 1;
    char maxa = 'a', maxb = 'a';
    for( int i = 0 ; i < n ; i++)
    {
        int type; cin >> type;
        int times; cin >> times;
        string temp; cin >> temp;
        if(maxb >= 'b'){ cout << "YES" <<endl; continue; }
        if( type == 1)
        {
            sizea += temp.size() * times;
            char mx = *max_element(temp.begin(), temp.end());
             maxa = max( maxa ,mx );
        }
        else
        {
            sizeb += temp.size() * times;
            char mx = *max_element(temp.begin(), temp.end());
             maxb = max( maxb , mx );
            
        }
        if(maxb >= 'b'){ cout << "YES" <<endl; continue; }
        else if( sizea >= sizeb)  cout << "NO" <<endl;
        else if( maxa == 'a') cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }

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





