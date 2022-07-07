#pragma once
#include <utility>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int	length_list(ListNode *list)
{
	int length = 0;
	while (list)
	{
		length++;
		list = list->next;
	}
	return length;
}

void	add_value(ListNode *&lcurrent, int val, int &carrying)
{
	if (val > 9)
	{
		carrying = 1;
		val -= 10;
	}
	else
		carrying = 0;
	lcurrent->next = new ListNode(val);
	lcurrent = lcurrent->next;
}

class Solution {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		ListNode	*lstart = new ListNode(0);
		ListNode	*lcurrent = lstart;
		int			val;
		int			carrying = 0;

		while (l1 || l2 || carrying)
		{
			val = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carrying;
			add_value(lcurrent, val, carrying);
			if (l1)
				l1 = l1->next;
			if (l2)
				l2 = l2->next;
		}
		lcurrent = lstart->next;
		delete lstart;
		return (lcurrent);
    }
};