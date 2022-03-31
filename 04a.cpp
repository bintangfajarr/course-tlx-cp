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
int v1[100][100], v2[100][100];
int a, b;
bool identic()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[i][j] != v2[i][j])
            {
                return false;
            }
        }
    }
    return true;
}
bool horizontal()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[i][j] != v2[a - i - 1][j])
            {
                return false;
            }
        }
    }
    return true;
}
bool vertical()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[i][j] != v2[i][a - 1 - j])
            {
                return false;
            }
        }
    }
    return true;
}
bool main_diagonal()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[i][j] != v2[j][i])
            {
                return false;
            }
        }
    }
    return true;
}
bool opp_diagonal()
{
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (v1[i][j] != v2[a - 1 - j][a - i - 1])
            {
                return false;
            }
        }
    }
    return true;
}
string cek()
{
    if (identic())
        return "identik";
    if (horizontal())
        return "horisontal";
    if (vertical())
        return "vertikal";
    if (main_diagonal())
        return "diagonal kanan bawah";
    if (opp_diagonal())
        return "diagonal kiri bawah";

    return "tidak identik";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int c, d;
    cin >> a >> a;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> v1[i][j];
        }
    }
    cin >> a >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cin >> v2[i][j];
        }
    }
    cout << cek() << endl;

    return 0;
}