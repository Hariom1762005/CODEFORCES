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
    string s; cin >> s;

    vector < bool > print (n+1 , false) ;
    stack < int > st;

    for( int i = 0 ; i < n ; i++)
    {
        if( s[i] == '3' ) print [i+1] = true;

        else if ( s[i] == '1') st.push( i+1 );

        else{

            if(st.empty())
            {
                print [i+1] = true;
            }
            else 
            {
                print[ st.top() ] =true;
                st.pop();
            }
        }
    }

    int count = 0;

    for( int i = 1 ; i < n+1; i++)
    {
        if( !print[i]) count++;
    }
   
    cout << count << endl;

    if( count !=0 )
    {
        for( int i = 1 ; i < n+1; i++)
        {
            if( !print[i]) cout << i <<" ";
        }
        
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





