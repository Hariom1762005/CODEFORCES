#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

bool check ( int x , int n)
{
    int total = 0;
    for(int i = 1 ; i < n ; i++)
    {
        total +=  ( x / i ) * i;
    }

    if( total >= n) return true;
    else return false;
}



void solve() {
     
    int n ; cin >> n;
    int low = 1 ; int high = n;
    int ans = n ;
    while( low <= high)
    {
        int mid = low + (high - low) / 2;

        if( check (mid ,n ))
        {
            ans = mid;
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    int x = 1 ;
    for( int i = ans ; i >= 1 ; i--)
    {
        int times = min (ans / i , n /i ) ;
        for( int j = 0 ; j < times ; j++)
        {
            for( int k = 0 ; k < i ; k++)
            cout << x << " ";

            x++;
        }

        n -= i * times;
        if( n == 0) break;
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





