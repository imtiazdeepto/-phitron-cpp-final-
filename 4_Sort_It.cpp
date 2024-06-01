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
    double mark_math;
    double mark_english;
    double TotalMark;
};

int32_t main()
{
    FastIO();

    int n;
    cin >> n;
    studnt sec[n];

    for (int i = 0; i < n; i++)
    {

        cin >> sec[i].nm >> sec[i].cls >> sec[i].s >> sec[i].id >> sec[i].mark_math >> sec[i].mark_english;
        sec[i].TotalMark = sec[i].mark_math + sec[i].mark_english;
    }

 
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (sec[i].TotalMark < sec[j].TotalMark)
            {
                swap(sec[i], sec[j]);
            }
            if (sec[i].TotalMark == sec[j].TotalMark)
            {
                if (sec[i].id > sec[j].id)
                {
                    swap(sec[i], sec[j]);
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << sec[i].nm << " " << sec[i].cls << " " << sec[i].s << " " << sec[i].id << " " << sec[i].mark_math << " " << sec[i].mark_english << endl;
    }

    return 0;
}