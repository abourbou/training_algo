#include "code.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	// if (argc != 2)
	// 	return (0);
	std::vector<int> vec({3, 2, 4});
	std::vector<int> result;

	result = Solution::twoSum(vec, 7);
	std::cout << "solution : [" << result[0] << ", " << result[1] << "]" << std::endl;
	return (0);
}