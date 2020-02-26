/*************************************************************************
	> File Name: LeetCode-83.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  2/26 18:35:24 2020
 ************************************************************************/

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p = head, *q;
        while (p && p->next) {
            if (p->val != p->next->val) {
                p = p->next;
            } else {
                q = p->next;
                p->next = q->next;
                free(q);
            }
        }
        return head;

    }
};
