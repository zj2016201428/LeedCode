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


/*
 * 20行，带上p是防止链表本身为空的情况，p都为空，根本就没有p->next。因此不加p会报错。
 * 19行，理论上q是可以不用的，此处用的原因是为了释放删除的节点。
 */
