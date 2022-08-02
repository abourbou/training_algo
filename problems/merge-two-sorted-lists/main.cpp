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
	ListNode *l1 = create_list(std::vector<int>({1, 2, 4,15}));
	ListNode *l2 = create_list(std::vector<int>({0, 3,5,5,5,5,8}));
	print_list(l1);
	print_list(l2);

    ListNode *sol = Solution::mergeTwoLists(l1, l2);
    print_list(sol);

	free_list(sol);
	return (0);
}
