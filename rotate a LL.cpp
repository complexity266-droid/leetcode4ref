/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int cnt = 1;
        ListNode* temp = head;

        // find length and last node
        while (temp->next != NULL) {
            temp = temp->next;
            cnt++;
        }

        k = k % cnt;
        if (k == 0) return head;

        // make circular
        temp->next = head;

        // move to new tail (cnt - k steps)
        int steps = cnt - k;
        temp = head;

        for (int i = 1; i < steps; i++) {
            temp = temp->next;
        }

        // new head
        head = temp->next;

        // break circle
        temp->next = NULL;

        return head;
    }
};