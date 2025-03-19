#include<bits/stdc++.h>
using namespace std;
#define pii pair<int, int>
#define pdd pair<double, double>
#define pll pair<ll, ll>
#define debug(x) cerr << #x << ": " << x << '\n';
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
inline void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int res = 0;
    if(a%2 && b%2 && c%2) res ++;
    res += a/2 + b/2 + c/2 + d/2;
    cout << res << endl;
}
int main()
{
    cout << fixed << setprecision(10);
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t --)
        solve();
    return 0;
}
