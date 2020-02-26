/*************************************************************************
	> File Name: LeetCode-142.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  2/26 18:36:29 2020
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
    ListNode *detectCycle(ListNode *head) {
        struct ListNode *p = head, *q = head;
    if (p == NULL) return NULL;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL || q->next == NULL) return NULL;
        q = q->next;
    }while (p != q);
    int cnt = 0;
    do {
        cnt++;
        p = p->next;
    }while(p != q);
    p = head, q = head;
    while (cnt--) q = q->next;
    while (q != p) p = p->next, q= q->next;
    return p;
        
    }
};
