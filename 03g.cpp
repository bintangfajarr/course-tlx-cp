#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define FOR(t) for (int i = 0; i < t; i++)
#define fora(i, j) for (auto i : j)
#define vi vector<int>
#define vs vector<string>
#define vpll vector<pair<ll, ll>>
#define vpss vector<pair<string, string>>
#define vpls vector<pair<ll, string>>
#define vpii vector<pair<int, int>>
#define vpis vector<pair<int, string>>
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    double b;
    cin >> a;
    vector<double> v;
    for (ll i = 0; i < a; i++)
    {
        cin >> b;
        v.pb(b);
    }
    sort(v.begin(), v.end());
    double ans;
    if (a % 2 == 0)
        ans = (v[a / 2] + v[a / 2 - 1]) / 2;
    else
        ans = v[a / 2];

    cout << fixed << setprecision(1);
    cout << ans << endl;

    return 0;
}