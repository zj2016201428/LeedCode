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
    /*
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
    */
    struct ListNode *q = head, *p - head;
    while (q) {
        q = q->next;
        p = p->next;
        if (q == NULL) return NULL;
        q = q->next;
        if (q == p) break;
    }
    if (q == NULL) return NULL;
    q = head;
    while (q != p) {
        q - q->next;
        p = p->next;
    }
    return q;
};




/*
 * 结合了141题和160题，两次追击问题，第一次追击确定相遇点，且此时走的慢的点走过的距离正好
 * 为环的长度（如果存在环的话），于是第二次追击当两点相遇时正好是环开始的地方。
