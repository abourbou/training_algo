#include <vector>
#include <iostream>

//only on a sorted array with unique elements
//return -1 if not find or index of the element
int	dichotomy(const std::vector<int> &array, int value, int low = 0, int high = -1)
{
	if (high == -1)
		high = array.size() - 1;

	while (low <= high)
	{
		long mid = ((long)low + (long)high) / 2;
		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}

bool	test_dichotomy(void)
{
	std::vector<int> vec1({1, 2, 3, 4, 5, 6});
	std::vector<int> vec2({1, 2, 3, 4, 5, 6, 7});
	std::vector<int> vec3({6});

	std::cout << "test1" << std::endl;
	if (dichotomy(vec1, 45) != -1)
		return false;
	std::cout << "test2" << std::endl;
	if (dichotomy(vec2, 45) != -1)
		return false;
	std::cout << "test3" << std::endl;
	if (dichotomy(vec3, 45) != -1)
		return false;
	std::cout << "test4" << std::endl;
	if (dichotomy(vec1, 1) != 0)
		return false;
	std::cout << "test5" << std::endl;
	if (dichotomy(vec2, 1) != 0)
		return false;
	std::cout << "test6" << std::endl;
	if (dichotomy(vec3, 1) != -1)
		return false;
	std::cout << "test7" << std::endl;
	if (dichotomy(vec1, 6) != 5)
		return false;
	std::cout << "test8" << std::endl;
	if (dichotomy(vec2, 6) != 5)
		return false;
	std::cout << "test9" << std::endl;
	if (dichotomy(vec3, 6) != 0)
		return false;
	std::cout << "everything is ok" << std::endl;
	return true;
}

int	main(void)
{
	test_dichotomy();

	return (0);
}