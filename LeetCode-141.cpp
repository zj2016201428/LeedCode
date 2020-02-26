/*************************************************************************
	> File Name: LeetCode-141.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  2/26 18:36:04 2020
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
    bool hasCycle(ListNode *head) {
        struct ListNode *p = head, *q = head;
        if (p == NULL) return false;
        do {
            p = p->next;
            q = q->next;
            if (q == NULL || q->next == NULL) return false;
            q = q->next;
        }while(p != q);
        return true;
        
    }
};
