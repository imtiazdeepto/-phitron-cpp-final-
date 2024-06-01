//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-05/challenges/replace-word/submissions/code/1378531590
//
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int x;
    cin >> x;
    while(x--){
    string name, str;
    cin >> name >> str;
    int size = str.size();
    int indx = name.find(str);

    while (indx>=0) {
       name= name.replace(indx,size, "#");
        indx = name.find(str);
        
    }

    cout << name << endl;
    }
    return 0;
}