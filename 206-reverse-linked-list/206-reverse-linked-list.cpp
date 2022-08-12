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
        ListNode *temp1=head;
        if(head==NULL)
            return head;
        if(temp1->next==NULL)
            return head;
        else if((temp1->next)->next==NULL) 
        {
            ListNode *temp=temp1->next;
            temp1->next->next=head;
            head=temp;
            temp1->next=NULL;
            return head;
        }
        else 
        {
            ListNode *temp2=head->next;
            head->next=NULL;
            while(temp2->next!=NULL)
            {
                temp1=temp2;
                temp2=temp2->next;
                temp1->next=head;
                head=temp1;
            }
            temp2->next=temp1;
            head=temp2;
            return head;
        }
    }
};