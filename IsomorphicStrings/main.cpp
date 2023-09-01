#include <iostream>
#include <string>

using namespace std;
#include "solution.h"

int main(int argc, char *argv[])
{
    string s("abc");
    string t("foo");

    Solution solution;
    solution.isIsomorphic(s, t);

    cout << "Result:" << solution.isIsomorphic(s, t) << endl;

    return 0;
}
