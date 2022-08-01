
#include "code.hpp"
#include <iostream>

using namespace std;

void test_find_pivot(vector<int> &vec, int result)
{
    int ret_value = Solution::pivotIndex(vec);
    if (ret_value != result)
        cout << "WRONG ANSWER: expected : " << result << ", getting : " << ret_value;
    else
        cout << "right answer";
    cout << endl;
}

int main(void)
{
    vector<int> vec1({1, 0});    
    vector<int> vec2({1,7,3,6,5,6});    
    vector<int> vec3({1, 2, 3});    

    test_find_pivot(vec1, 0);
    test_find_pivot(vec2, 3);
    test_find_pivot(vec3, -1);

    return (0);
}
