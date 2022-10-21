/*************************************************************************
	> File Name: LeetCode-234.cpp
	> Author: 
	> Mail: 
	> Created Time: 五  2/28 17:27:07 2020
 ************************************************************************/
/*************************************************************************
	> File Name: 234.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年02月27日 星期四 20时50分10秒
 ************************************************************************/
/*
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
 


int get_length(struct ListNode *head) {
    int n = 0;
    while (head) n += 1, head = head->next;
    return n;
}

struct ListNode* reverse (struct ListNode *head, int n) {
    struct ListNode ret, *p = head, *q;
    while (n--) p = p->next;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head){
    int len = get_length(head);
    struct ListNode *p = head, *q = reverse(head, (len + 1) / 2);
    while (q) {
        if (p->val - q->val) {
            return false;
        }
        p = p->next;
        q = q->next;
    }
    return true;

}
*/


/*************************************************************************
   > File Name: 234.cpp
   > Author: hug
   > Mail:   hug@haizeix.com
   > Created Time: 一  7/15 19:02:26 2019
 ************************************************************************/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int get_length(struct ListNode *head) {
    int n = 0;
    while (head) n += 1, head = head->next;
    return n;
}

struct ListNode *get_node(struct ListNode *head, int ind) {
    while (ind--) head = head->next;
    return head;
}

struct ListNode *reverse(struct ListNode *head) {
    struct ListNode ret, *p = head, *q;
    ret.next = NULL;
    while (p) {
        q = p->next;
        p->next = ret.next;
        ret.next = p;
        p = q;
    }
    return ret.next;
}

bool isPalindrome(struct ListNode* head) {
    int len = get_length(head);
    struct ListNode *p = head, *q = reverse(get_node(head, (len + 1) / 2));
    while (q) {
        if (p->val - q->val) return false;
        p = p->next;
        q = q->next;
    }
    return true;
}

