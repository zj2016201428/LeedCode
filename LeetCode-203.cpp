/*************************************************************************
	> File Name: LeetCode-203.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  2/28 17:22:37 2020
 ************************************************************************/

/*************************************************************************
	> File Name: 202.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月25日 星期二 22时08分48秒
 ************************************************************************/
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<queue>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    struct ListNode ret, *p, *q;
    ret.next = head;
    p = &ret;
    while (p && p->next) {
        if (p->next->val  == val) {
            q = p->next;
            p->next = q->next;
            free(q);
        }else {
            p = p->next;
        }
    }
    return ret.next;
}
