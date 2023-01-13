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
    int listlen(ListNode *list)
    {
        ListNode *tmp = list;
        int len = 0;
        while (tmp)
        {
            tmp = tmp->next;
            len++;
        }
        return (len);
    }    
    
    void swap (int& x, int& y)
    {
        int tmp;
        tmp = x;
        x = y;
        y = tmp;
    }
    
    ListNode* reverseList(ListNode* head) { //complexity O(n^2)
        ListNode *reverse = head;
        ListNode *tmp;
        int i = 0;
        int len = listlen(head);
        int len2 = listlen(head);
        while (i < len2)
        {
            len = len2;
            tmp = reverse;
            while (len - 1)
            {
                tmp = tmp -> next;
                len--;
            }
            swap(tmp->val,head->val);
            head = head->next;
            len2--;
            i++;
        }
        return (reverse);
    }
};

/*
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
Input: head = [1,2]
Output: [2,1]
Input: head = []
Output: []
*/
