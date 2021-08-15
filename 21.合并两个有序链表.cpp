/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* HEAD;
        if(l1 == nullptr)
        {
            return l2;
        }

        if(l2 == nullptr)
        {
            return l1;
        }

        if(l1 -> val < l2-> val)
        {
            HEAD = l1;
            l1 = l1->next;
        }else
        {
            HEAD = l2;
            l2 = l2->next;
        }
        ListNode* next = HEAD;

        while(l1!=nullptr || l2 != nullptr)
        {
            if(l1 == nullptr)
            {
                next->next = l2;
                return HEAD;
            }
            
            if(l2 == nullptr)
            {
                next->next = l1;
                return HEAD;
            }
            
            if(l1->val < l2->val)
            {
                next->next = l1;
                next = next->next;
                l1 = l1->next;
            }else
            {
                next->next = l2;
                next = next->next;
                l2 = l2->next;
            }
        }
        return HEAD;
    
    }
};
// @lc code=end

