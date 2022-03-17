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
vector<double> v;
vector<double> v2;
vector<double> v3;
int n, maxdoub;
double a, b;
void sort()
{

    int swapp;
    double temp;
    do
    {
        swapp = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (v3[i] < v3[i + 1])
            {

                swap(v3[i + 1], v3[i]);

                swap(v[i + 1], v[i]);

                swap(v2[i + 1], v2[i]);
                swapp = 1;
            }
        }

    } while (swapp == 1);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    double ans = 0;
    cin >> n >> maxdoub;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.pb(a);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b;
        v2.pb(b);
        v3.pb(b / v[i]);
    }
    sort();

    int k = 0;
    int i = 0;
    for (i = 0, k = 0; i < n; i++, k++)
    {
        if (maxdoub == 0)
        {
            break;
        }
        while (v[i] != 0 && maxdoub != 0)
        {
            ans += v3[k];
            v[i]--;
            maxdoub--;
        }
    }

    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}