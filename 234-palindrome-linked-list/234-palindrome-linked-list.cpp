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
    ListNode *temp;
    int v1=0;
    void check(ListNode *root)
    {
        if(root==NULL)
            return ;
        else 
        {
            check(root->next);
            if(temp->val!=root->val)
            {
                v1++;
            }
            temp=temp->next;
        }
    }
    bool isPalindrome(ListNode* head) {
        temp=head;
        v1=0;
        check(head);
        if(v1==0)
            return 1;
        else 
            return 0;
    }
};