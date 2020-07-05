/*
2. 两数相加
给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ret_temp = new ListNode;
        ListNode* head = ret_temp;
        int add_tmp = 0;
        int val1,val2;
        while(l1!=nullptr ||l2!=nullptr||add_tmp!=0 )
        {
            
            if(l1 !=nullptr )
            {
                val1 = l1->val;
                l1 = l1->next;
            }else
            {
                val1 = 0;
            }

            if(l2 !=nullptr )
            {
                val2 = l2->val;
                l2 = l2->next;
            }else
            {
                val2 = 0;
            }
            
            ret_temp->val = val1 + val2 + add_tmp;

            if(ret_temp->val>=10)
            {
                add_tmp = ret_temp->val/10;
                ret_temp->val -= add_tmp *10;
            }else
            {
                add_tmp = 0;
            }
            if(l1!=nullptr ||l2!=nullptr||add_tmp!=0 )
            {
                ret_temp->next = new ListNode;
                ret_temp = ret_temp->next;
            }
        }
        
        
        return head;
};
