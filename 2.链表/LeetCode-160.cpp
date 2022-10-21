/*************************************************************************
	> File Name: LeetCode-160.cpp
	> Author: 
	> Mail: 
	> Created Time: 三  2/26 18:37:41 2020
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    /*
    int cntA = 0, cntB = 0;
    struct ListNode *p = headA, *q = headB;
    while (p) cntA++, p = p->next;
    while (q) cntB++, q = q->next;
    int m = cntA - cntB;
    p = headA, q = headB;
    if (m > 0) {
        while (m--) {
            p = p->next;
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    }else {
        while (m++) {
            q = q->next;
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    }
    return p;
    */

    ListNode *p = headA, *q = headB;
    while (p != q) {
        p = p ? p->next : headB;
        q = q ? q->next : headA;
    }
    return q;
}



/*
 * 画图，画图，画图
 * 如何消除距离差，答案就是让令人不但走自己的路还要把对方的路也走一遍，这样两条路若相交则必相遇，若不相交则两人必然同时到达终点。
 * /
