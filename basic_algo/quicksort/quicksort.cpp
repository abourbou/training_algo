#include <vector>
#include <iostream>

size_t partition(std::vector<int> &arr, int low, int high)
{
	int	pivot = arr[high];
	int	i = low - 1;
	int		buffer;

	//put smaller elems than the pivot at the start of the array
	for (int j = low; j < high; ++j)
	{
		if (arr[j] < pivot)
		{
			++i;
			//swap arr[i] & arr[j]
			if (i != j)
			{
				buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
	//swap pivot and arr[i+1]
	if (i + 1 != high)
	{
		buffer = arr[i + 1];
		arr[i + 1] = pivot;
		arr[high] = buffer;
	}

	return (i + 1);
}

void	quick_sort_rec(std::vector<int> &arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quick_sort_rec(arr, low, pi - 1);
		quick_sort_rec(arr, pi + 1, high);
	}
}

void	quick_sort(std::vector<int> &arr)
{
	if (arr.size() >= 2)
		quick_sort_rec(arr, 0, arr.size() - 1);
}

bool	test_sort(void)
{
	std::vector<int> vec1({1, 2, 3, 4, 5, 6});
	std::vector<int> cpy_vec1({1, 2, 3, 4, 5, 6});
	std::vector<int> vec2({2, 6, 4, 3, 1, 5});
	std::vector<int> vec3({6, 5, 4, 3, 2, 1});

	quick_sort(cpy_vec1);
	if (cpy_vec1 != vec1)
		return false;
	quick_sort(vec2);
	if (vec2 != vec1)
		return false;
	quick_sort(vec3);
	if (vec3 != vec1)
		return false;
	return true;
}