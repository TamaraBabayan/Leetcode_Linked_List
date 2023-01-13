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
    ListNode* removeElements(ListNode* head, int val) { //complexity O(n)
        if (head)
        {
            ListNode *curr = head;
            while (curr->next)
            {
                if (curr->val == val)
                {
                    curr->val = curr->next->val;
                    ListNode* tmp = curr->next->next;
                    delete curr->next;
                    curr->next = tmp;
                }
                else if (curr->next->val == val)
                {
                    ListNode *tmp = curr->next->next;
                    delete curr->next;
                    curr->next = tmp;
                } else {
                    curr = curr->next;
                }
            }
            if (curr->val == val) {
                head = nullptr;
            }
        }
        return head;
    }
};

/*
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]
Input: head = [], val = 1
Output: []
Input: head = [7,7,7,7], val = 7
Output: []
*/
