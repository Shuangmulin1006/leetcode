#include <iostream>
#include <vector>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    // vector<int> input{1, 7, 3, 6, 5, 6};
    // vector<int> input{1, 2, 3};
    // vector<int> input{2, 1, -1};
    // vector<int> input{-1, -1, -1, -1, -1, 0};
    vector<int> input{-1, -1, 0, 1, 1, 0};

    Solution solution;
    int pivot_index = solution.pivotIndex(input);

    cout << "Pivot Index " << pivot_index << endl;

    return 0;
}