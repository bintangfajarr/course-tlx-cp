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
    vi v;
    int n, q, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        v.pb(a);
    }
    cin >> q;
    sort(v.begin(), v.end());
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << upper_bound(v.begin(), v.end(), y) - upper_bound(v.begin(), v.end(), x) << endl;
    }

    return 0;
}