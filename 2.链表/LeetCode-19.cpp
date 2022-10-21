/*************************************************************************
	> File Name: LeetCode-19.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  2/25 21:06:21 2020
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        /*
        //if (head->next == NULL) return NULL;
        ListNode *current_node = head, *flag_node = head;
        for (int i = 0; i < n; i++) {
            flag_node = flag_node->next;
        }
        if (flag_node == NULL) {
            head = head->next;
            return head;
        }
        while (flag_node->next != NULL) {
            current_node = current_node->next;
            flag_node = flag_node->next;
        }
        ListNode *delete_node = current_node->next;
        current_node->next = delete_node->next;
        free(delete_node);
        return head;
        */
        struct ListNode ret, *p, *q;
        ret.next = head;
        p = q = &ret;
        while (n--) { q = q->next; }
        q = q->next;
        while (q) {
            p = p->next;
            q = q->next;
        }
        q = p->next;
        p->next = q->next;
        //free(q);
        return ret.next;
        }
};





/*
 * 本题的核心思路是双指针，但细节上亦有差距。
 * 一种是构造虚拟头节点，这样不用判断删除头节点这种特殊情况。
 * 另一种是直接从头节点开始，那么需要单独判断删除头节点的情况。
 */
