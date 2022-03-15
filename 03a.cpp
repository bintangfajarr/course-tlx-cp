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
    ll n, x, a, idxmin = 9999999, angka, index;
    vector<ll> v;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        if (abs(x - a) < idxmin)
        {
            idxmin = abs(x - a);
            angka = a;
            // index = i;
        }
        else if (idxmin == abs(x - a))
        {
            // idxmin = abs(a - x);
            if (angka > a)
            {
                angka = a;
            }
        }
    }
    cout << angka << endl;

    return 0;
}