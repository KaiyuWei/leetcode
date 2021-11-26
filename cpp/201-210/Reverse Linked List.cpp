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
    ListNode* reverseList(ListNode* head) {
        ListNode *prev(nullptr);
        while (head != nullptr) {
            head->next = prev;
            prev = head;
            head = head ->next;
        }
        return prev;
    }
};
