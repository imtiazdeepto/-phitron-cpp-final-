#include <bits/stdc++.h>

using namespace std;

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

int main()
{

    int n;
    cin >> n;
    studnt marks[n];

    for (int i = 0; i < n; i++)
    {
        cin >> marks[i].nm >> marks[i].cls >> marks[i].s >> marks[i].id >> marks[i].mark_math >> marks[i].mark_english;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (marks[i].mark_english < marks[j].mark_english)
            {
                swap(marks[i], marks[j]);
            }
            else if (marks[i].mark_english == marks[j].mark_english)
            {
                if (marks[i].mark_math < marks[j].mark_math)
                {
                    swap(marks[i], marks[j]);
                }
                else if (marks[i].mark_math == marks[j].mark_math)
                {
                    if (marks[i].id > marks[j].id)
                    {
                        swap(marks[i], marks[j]);
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << marks[i].nm << " " << marks[i].cls << " " << marks[i].s << " " << marks[i].id << " " << marks[i].mark_math << " " << marks[i].mark_english << endl;
    }

    return 0;
}
