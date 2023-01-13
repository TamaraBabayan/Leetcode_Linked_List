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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) { //time complexity O(n)
        int lenA = listlen(headA);
        int lenB = listlen(headB);
        if (lenA > lenB)
        {
            while (lenA > lenB)
            {
                headA = headA->next;
                lenA--;
            }
            while (headA && headB)
            {
                if (headA == headB)
                    return(headA);
                headA = headA->next;
                headB = headB->next;
            }
        }
        else
        {
             while (lenB > lenA)
            {
                headB = headB->next;
                lenB--;
            }
            while (headA && headB)
            {
                if (headA == headB)
                    return (headA);
                headA = headA->next;
                headB = headB->next;
            }
        }
        return (nullptr);
    }
};

/*
Given the heads of two singly linked-lists headA and headB, return the node at which the two lists intersect. If the two linked lists have no intersection at all, return null.
*/
