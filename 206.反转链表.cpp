/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr || head -> next == nullptr)
        {
            return head;
        }
        ListNode* next;
        ListNode* find = head->next;
        ListNode* last = head;

        head->next = nullptr;
        while(find -> next != nullptr)
        {
            next = find;
            find = find->next;
            next -> next = last;
            last = next;
        }
        find -> next = last;
        return find;

    }
};
// @lc code=end

