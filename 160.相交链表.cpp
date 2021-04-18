/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
 */

// @lc code=start
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr)
        {
            return nullptr;
        }

        ListNode * pa = headA;
        ListNode * pb = headB;
        int counta=0,countb=0;

        while (pa->next!= nullptr)
        {
            pa=pa->next;
            counta++;
        }

        while (pb->next!= nullptr)
        {
            pb=pb->next;
            countb++;
        }
        
        pa = headA;
        pb = headB;

        while (countb> counta)
        {
            pb=pb->next;
            countb--;
        }

        while (counta> countb)
        {
            pa=pa->next;
            counta--;
        }

        while(pa != nullptr && pb != nullptr)
        {
            if(pa == pb)
            {
                return pa;
            }

            pa = pa->next;
            pb = pb->next;
        }
        return nullptr;
    }
};
// @lc code=end

