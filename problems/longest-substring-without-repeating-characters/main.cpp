
#include "code.hpp"
#include <iostream>

using namespace std;

int main(void)
{
	string str = "acabd";

	std::cout << "longest : " << Solution::lengthOfLongestSubstring(str) << std::endl;
    return (0);
}