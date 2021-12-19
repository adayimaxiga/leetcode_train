/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == nullptr)
        {
            return nullptr;
        }
        /* delete head value*/
        while(head->val == val )
        {
            if(head->next != nullptr )
            {
                head = head->next;
            }else
            {
                return nullptr;
            }
        }
        ListNode* find = head;
        ListNode* nextval = find->next;

        while(nextval != nullptr)
        {
            if(nextval -> val == val)
            {
                find ->next = nextval ->next;
                nextval = nextval ->next;
            }else
            {
                find = find -> next;
                nextval = nextval ->next;
            }
            
        }
        return head;
    }
};
// @lc code=end

