#include "code.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

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

ListNode    *create_cycle(ListNode *head, int start)
{
    int pos = 0;
    ListNode *lpos = 0;

    while (head->next)
    {
        if (pos == start)
            lpos = head;
        head = head->next;
        ++pos;
    }
    head->next = lpos;
    return (head);
}

//problem : https://leetcode.com/problems/add-two-numbers/
int	main(int argc, char **argv)
{
	(void)argc, (void)argv;
	ListNode *l1 = create_list(std::vector<int>({1, 2, 4,15}));
    ListNode *tail = create_cycle(l1, 2);
    if (tail)
        cout << "tail->next : " << tail->next << ", val : " << tail->next->val << endl;

    ListNode *sol = Solution::detectCycle(l1);
    cout << "sol is :" << sol << endl;

	return (0);
}
