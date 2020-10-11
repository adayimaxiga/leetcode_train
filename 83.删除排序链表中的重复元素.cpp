/*
 * @lc app=leetcode.cn id=83 lang=cpp
 *
 * [83] 删除排序链表中的重复元素
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
    ListNode* deleteDuplicates(ListNode* head) {
        int temp;
        ListNode* ret_head = head;
        ListNode* last_head = head;
        if ((head == NULL)||(head->next == NULL))
        {
            return ret_head;
        }
        temp = head->val;
        head = head->next;

        while (head!= NULL)
        {
            if (head->val == temp)
            {
                last_head->next = head ->next;
                /* code */
            }else
            {
                last_head = last_head->next;
                temp = head->val;
            }
            head = head -> next;
        }
        return ret_head;
    }
};
// @lc code=end

