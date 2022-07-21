
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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