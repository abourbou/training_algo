
//problem : https://leetcode.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 **/

 struct ListNode
 {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    static ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode *start_list;
        ListNode *current_list;

        if (!list1)
            return list2;
        else if (!list2)
            return list1;

        if (list1->val < list2->val) 
        {
            start_list = list1;
            list1 = list1->next;
        }
        else
        {
            start_list = list2;
            list2 = list2->next;
        }
        current_list = start_list;
        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                current_list->next = list1;
                current_list = list1;
                list1 = list1->next;
            }
            else
            {
                current_list->next = list2;
                current_list = list2;
                list2 = list2->next;
            }
        }
        if (list1)
            current_list->next = list1;
        else
            current_list->next = list2;
        return (start_list);
    }
};