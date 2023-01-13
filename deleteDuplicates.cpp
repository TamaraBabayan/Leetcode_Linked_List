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

    ListNode* deleteDuplicates(ListNode* head) {  //time complexity O(n)
        if (head) {
            ListNode *tmp = head;
            while (tmp && tmp->next)
            {
                if (tmp->val == tmp->next->val) {
                    ListNode *next_of_tmp = tmp->next->next;
                    delete tmp->next;
                    tmp->next = next_of_tmp;
                }
                else
                    tmp = tmp->next;
            }
        }
        return head;
    }
};

/*Input: head = [1,1,2]
  Output: [1,2]

  Input: head = [1,1,2,3,3]
  Output: [1,2,3]
*/
