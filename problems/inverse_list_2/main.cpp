#include "code.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

void	print_list(ListNode *list)
{
	while (list)
	{
		std::cout << list->val << "-";
		list = list->next;
	}
	std::cout << std::endl;
}

ListNode *create_list(std::vector<int> vec)
{
	ListNode *current;
	ListNode *start;

	if (vec.empty())
		return 0;
	start = new ListNode(vec[0]);
	current = start;
	for (auto it = ++vec.begin(); it != vec.end(); ++it)
	{
		current->next = new ListNode(*it);
		current = current->next;
	}
	current->next = 0;

	return (start);
}

void	free_list(ListNode *list)
{
	ListNode *next;
	ListNode *current = list;

	while (current)
	{
		next = current->next;
		delete current;
		current = next;
	}
}

//problem : https://leetcode.com/problems/add-two-numbers/
int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	ListNode *l1 = create_list(std::vector<int>({1, 2 ,3, 4}));
	print_list(l1);
	l1 = Solution::reverseBetween(l1, 2, 3);
	// l1 = Solution::reverseBetween(l1, 1, 3);
	// l1 = Solution::reverseBetween(l1, 1, 4);
	// l1 = Solution::reverseBetween(l1, 1, 3);
	// l1 = Solution::reverseBetween(l1, 1, 1);
	// l1 = Solution::reverseBetween(l1, 2, 2);
	print_list(l1);

	free_list(l1);
	return (0);
}
