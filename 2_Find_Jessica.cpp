#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    getline(cin, name);
    cin.ignore();
    string str = "Jessica";
    stringstream ss(name);
    string word;
    bool found = false;
    while (ss >> word)
    {
        if (word == str)
        {
            found = true;
            break;
        }
    }
    if(found)cout << "YES" << endl;
    else cout << "NO" << endl;
}