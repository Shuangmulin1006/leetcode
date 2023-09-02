#include <iostream>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    string input = "dwmodizxvvbosxxw";
    vector<string> dict = {"ox",   "lb",   "diz", "gu",   "v", "ksv",
                           "o",    "nuq",  "r",   "txhe", "e", "wmo",
                           "cehy", "tskz", "ds",  "kzbu"};
    Solution solution;
    cout << solution.minExtraChar(input, dict) << endl;
    return 0;
}