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
    bool hasCycle(ListNode *head) { //time complexity O(n)
        if (head)
        {
            ListNode *first = head;
            ListNode *second = head->next;
            while (first && second && second->next)
            {
                if (first == second) {
                    return true;
                }
                first = first->next;
                second = second->next->next;
            }
        }
        return false;
    }
};

/*
Input: head = [3,2,0,-4], pos = 1
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Input: head = [1,2], pos = 0
Output: true
Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Input: head = [1], pos = -1
Output: false
Explanation: There is no cycle in the linked list.
*/
