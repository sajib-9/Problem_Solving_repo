/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        ListNode* slow = head;
        ListNode* fast = head;
        
        /// [1, addr(2)] -> [2, addr(3)] -> [3, NULL]
        ///                 (slow)          (fast)
        while(fast->next and fast->next->next) {
            slow = slow -> next;
            fast = fast -> next -> next;
            if (slow == fast) return true;
        }
        return false;
    }
};
