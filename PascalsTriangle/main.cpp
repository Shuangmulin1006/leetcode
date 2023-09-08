#include <iostream>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    Solution solution;
    vector<vector<int>> ans;
    ans = solution.generate(30);

    for (auto &i : ans) {
        for (auto &j : i)
            cout << j;
        cout << endl;
    }
    return 0;
}