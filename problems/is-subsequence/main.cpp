#include "code.hpp"
#include <iostream>

using namespace std;

int main(void)
{
    cout << Solution::isSubsequence("abc", "ahbgdc") << endl;
    cout << Solution::isSubsequence("abc", "ahbgd") << endl;
    cout << Solution::isSubsequence("axc", "ahbgd") << endl;
    cout << Solution::isSubsequence("axc", "ahbgdx") << endl;
    cout << Solution::isSubsequence("axc", "axhbgdxc") << endl;

    return  (0);
}