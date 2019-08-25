//
// Created by xk on 2019/8/25.
//

#include <vector>
#include <iostream>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0), *cur = &dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            if (l1) carry += l1->val, l1 = l1->next;
            if (l2) carry += l2->val, l2 = l2->next;
            cur->next = new ListNode(carry % 10);
            carry /= 10;
            cur = cur->next;
        }
        return dummy.next;
    }
};

std::vector<ListNode*> init() {
    ListNode dummy1(0), *p1 = &dummy1;
    p1->next = new ListNode(2), p1 = p1->next;
    p1->next = new ListNode(4), p1 = p1->next;
    p1->next = new ListNode(3);
    ListNode dummy2(0), *p2 = &dummy2;
    p2->next = new ListNode(5), p2 = p2->next;
    p2->next = new ListNode(6), p2 = p2->next;
    p2->next = new ListNode(4);
    return {dummy1.next, dummy2.next};
}

int main() {
    using std::cout;

    std::vector<ListNode*> ls = init();
    ListNode *l1 = ls[0];
    ListNode *l2 = ls[1];
    Solution s;
    ListNode *result = s.addTwoNumbers(l1, l2);
    while (result) {
        cout << result->val << "->";
        result = result->next;
    }
}