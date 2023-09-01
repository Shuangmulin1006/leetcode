#include <iostream>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    vector<int> ans;

    Solution solution;

    ans = solution.countBits(5);

    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}