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
    int baris, kolom, k, temp = 1;
    cin >> baris >> kolom >> k;
    int arr[200][200];
    for (int i = 1; i <= baris; i++)
    {
        for (int j = 1; j <= kolom; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int j = 1; j <= kolom; j++)
    {
        for (int i = 1; i <= baris; i++)
        {
            if (i > 1)
            {
                temp = temp *= arr[i - 1][j];
            }
            if (j > 1)
            {
                temp = temp *= arr[i][j - 1];
            }
            if (baris > i)
            {
                temp = temp *= arr[i + 1][j];
            }
            if (kolom > j)
            {
                temp = temp *= arr[i][j + 1];
            }
            if (temp == k)
            {
                cout << i << " " << j << endl;
                return 0;
            }
            else
            {
                temp = 1;
            }
        }
    }
    cout << 0 << " " << 0 << endl;

    return 0;
}