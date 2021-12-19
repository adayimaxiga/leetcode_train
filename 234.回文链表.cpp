/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        stack<int> datastack;
        stack<int> compstack;

        if(head == nullptr)
        {
            return true;
        }
        datastack.push(head->val);

        while (head->next != nullptr)
        {
            head = head->next;
            datastack.push(head->val);
        }
        int size = datastack.size();

        for(int i = 0;i < size/2; i++)
        {
            compstack.push(datastack.top());
            datastack.pop();
        }
        if(compstack.size() != datastack.size())
        {
            datastack.pop();
        }

        while((!compstack.empty())&&(!datastack.empty()))
        {
            int comp = compstack.top();
            int data = datastack.top();
            if(comp != data)
            {
                return false;
            }
            compstack.pop();
            datastack.pop();
        }

        // if(compstack.empty()&&datastack.empty())
        // {
            return true;
        // }
        // return false;

    }
};
// @lc code=end
