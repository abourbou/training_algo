
#include <vector>
#include <iostream>
#include "code.hpp"

using namespace std;

int main(void)
{
    vector<int> vec{1, 3};

    cout << "result : " << Solution::searchInsert(vec, 5) << endl;

    return (0);
}