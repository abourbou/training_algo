#include "code.hpp"
#include <iostream>
#include <string>
#include <algorithm>

void	print_list(ListNode *list)
{
	std::string number;
	while (list)
	{
		number.push_back(list->val + '0');
		list = list->next;
	}
	std::reverse(number.begin(), number.end());
	std::cout << number << std::endl;
}

ListNode *create_list(unsigned long int number)
{
	ListNode *current;
	ListNode *start;

	start = new ListNode(number % 10);
	number = number / 10;
	current = start;
	while (number)
	{
		current->next = new ListNode(number % 10);
		number = number / 10;
		current = current->next;
	}
	return (start);
}

void	free_list(ListNode *list)
{
	ListNode *next;

	while (list)
	{
		next = list->next;
		delete list;
		list = next;
	}
}

//problem : https://leetcode.com/problems/add-two-numbers/
int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	ListNode *l1 = create_list(342);
	ListNode *l2 = create_list(465);
	ListNode *lsol = Solution::addTwoNumbers(l1, l2);
	print_list(lsol);

	free_list(lsol);
	free_list(l2);
	free_list(l1);
	return (0);
}
