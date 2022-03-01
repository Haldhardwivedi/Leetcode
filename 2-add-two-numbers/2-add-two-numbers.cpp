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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode *temp=NULL,*head=NULL;
        while(l1!=NULL&&l2!=NULL)
        {
            int sum=l1->val+l2->val+carry;
            //cout<<sum<<endl;
            carry=sum/10;
            ListNode *t1=new ListNode();
            t1->val=sum%10;
            t1->next=NULL;
            if(head==NULL)
            {
                temp=t1;
                head=t1;
            }
            else 
            {
                temp->next=t1;
                temp=temp->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int sum=l1->val+carry;
            carry=sum/10;
            ListNode *t1=new ListNode();
            t1->val=sum%10;
            t1->next=NULL;
            if(head==NULL)
            {
                temp=t1;
                head=t1;
            }
            else 
            {
                temp->next=t1; temp=temp->next;
            }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            int sum=l2->val+carry;
            carry=sum/10;
            ListNode *t1=new ListNode();
            t1->val=sum%10;
            t1->next=NULL;
            if(head==NULL)
            {
                temp=t1;
                head=t1;
            }
            else 
            {
                temp->next=t1; temp=temp->next;
            }
            l2=l2->next;
        }
        if(carry)
        {
            ListNode *t1=new ListNode();
            t1->val=carry;
            t1->next=NULL;
            if(head==NULL)
            {
                temp=t1;
                head=t1;
            }
            else 
            {
                temp->next=t1; temp=temp->next;
            }
        }
        return head;
    }
};