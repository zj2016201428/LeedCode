/*************************************************************************
	> File Name: LeetCode-24.cpp
	> Author: 
	> Mail: 
	> Created Time: 二  2/25 21:21:23 2020
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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode *current_node = head, *next_node = head, *flag_node = next_node->next;
        next_node->next = flag_node->next;
        flag_node->next = next_node;
        current_node = flag_node;
        head = current_node;
        while (next_node->next != NULL && next_node->next->next != NULL) {
            current_node = next_node;
            next_node = next_node->next;
            flag_node = next_node->next;
            
            next_node->next = flag_node->next;
            flag_node->next = next_node;
            current_node->next = flag_node;
        } 
        return head;
    }
};
