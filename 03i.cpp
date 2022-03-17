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
    int k, n;
    ll a;
    vector<ll> v;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(), v.end());
    cout << v[k - 1] << endl;

    return 0;
}