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
        /*
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
        */
        struct ListNode ret, *p, *q;
        ret.next = head;//注意这里head是指针变量，用=而不是->
        p = &(ret);
        q = head;
        //注意这里的判断条件是q不是p
        while (q && q->next) {
            p->next = q->next;
            q->next = p->next->next;
            p->next->next = q;
            p = q;
            q = p->next;
        }
        return ret.next;//注意这里不能用head了，因为head指向的是原来的表头，不是现在的表头了。
    }
};




/*此题不难，重在思路清晰，画图非常有用。
