#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


bool reach(int x,int n,int k,vector<int>& score, vector<int>&extra) {
    int total = 0;                       
    for (int i = 0; i < n; i++) {
        if (score[i] >= x) continue;        
        if (extra[i] < 0) return false;     
        total += (x - score[i]) + extra[i];     
        if (total > k) return false;    
    }
    return true;                       
}

void solve() {
     
    int n ,k;
    cin >> n >> k;
    vector<int > score(n), extra(n); 
        int mn = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            int a, b, c;
            cin >> a >>b >>c;
            score[i] = a + b + c;
            mn = min(mn, score[i]);
            if(a > b || a > c || b > c) extra[i] = 0;              
            else if(a==c && b==c)extra [i] = -1;                        
            else extra[i] = 2*(min(b - a, c - b)+ 1);           
        }
   
         int low=mn,high=mn+k;
        while (low<high) 
        {
            int mid=low+(high-low+1)/2;
            if (reach(mid,n,k,score, extra )) low= mid; else high = mid - 1;
        }
        cout << low <<endl;

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





