#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define FastIO()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
class studnt
{
public:
    string nm;
    int cls;
    char s;
    int id;
  
};

int32_t main()
{
    FastIO();

    int n;
    cin >> n;
    studnt sec[n];
    for (int i = 0; i < n; i++)
    {
        cin >> sec[i].nm >> sec[i].cls >> sec[i].s >> sec[i].id;
    }
    for (int i = 0, j = n - 1; i < n/2; i++, j--)
    {
        swap(sec[i].s, sec[j].s);
    }
    for (int i = 0; i < n; i++)
    {
        cout << sec[i].nm << " " << sec[i].cls << " " << sec[i].s << " " << sec[i].id << endl;
    }

    return 0;
}