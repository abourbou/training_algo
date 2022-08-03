
#include <map>


//problem : https://leetcode.com/problems/linked-list-cycle-ii/

//algo used : https://www.geeksforgeeks.org/floyds-cycle-finding-algorithm/
using namespace std;

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
    static ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast && fast->next)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
                break;
        }
        if (!fast || !fast->next)
            return (0);
        while (head != slow)
        {
            head = head->next;
            slow = slow->next;
        }
        return (head);
    }
};