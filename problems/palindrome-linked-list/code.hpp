
// https://leetcode.com/problems/palindrome-linked-list

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode    *iter_list(ListNode *start, int n)
{
    for(int i = 0; i < n; ++i)
		start = start->next;
	return start;
}

void    inverse_list(ListNode **start)
{
    ListNode *prev = 0;
    ListNode *next;
    if (!start)
        return ;
    ListNode *current = *start;
    
    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *start = prev;
}
    
class Solution {
public:
    static bool isPalindrome(ListNode* head) {
        ListNode *lbuffer = head;
        int size = 0;

        while (lbuffer)
        {
            ++size;
            lbuffer = lbuffer->next;
        }
        lbuffer = iter_list(head, size / 2);
        inverse_list(&lbuffer);
        
        while (head && lbuffer)
        {
            if (head->val != lbuffer->val)
                return (false);
            head = head->next;
            lbuffer = lbuffer->next;
        }
        return (true);
    }
};