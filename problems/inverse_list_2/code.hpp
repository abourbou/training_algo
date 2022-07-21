
#include <utility>

// problem : https://leetcode.com/problems/reverse-linked-list-ii

/**
 * Definition for singly-linked list.
*/
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    static ListNode* reverseBetween(ListNode* head, int left, int right) {
        int current_position = 1;
		ListNode *prev_to_first;
		ListNode *first_to_inv;
		ListNode *prev = 0;
		ListNode *current = head;
		ListNode *next;

		if (left >= right)
			return head;
		while (current_position < left && current)
		{
			if (current_position == left - 1)
				prev_to_first = current;
			current = current->next;
			++current_position;
		}
		next = current;
		first_to_inv = current;
		while (current_position <= right && current)
		{
			current = next;
			next = current->next;
			current->next = prev;
			prev = current;

			++current_position;
		}
		if (left != 1)
			prev_to_first->next = prev;
		if (next)
			first_to_inv->next = next;

		return ((left == 1) ? prev : head);
    }
};