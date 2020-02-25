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
        //free(delete_node);
        return head;
    }
};
