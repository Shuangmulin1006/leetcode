#include <iostream>
#include <vector>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    // vector<int> input{1, 2, 3, 4};
    // vector<int> input{1, 1, 1, 1, 1};
    vector<int> input{3, 1, 2, 10, 1};

    Solution solution;

    vector<int> output = solution.runningSum(input);

    for (int i : output)
        cout << i << " ";
    cout << endl;

    return 0;
}