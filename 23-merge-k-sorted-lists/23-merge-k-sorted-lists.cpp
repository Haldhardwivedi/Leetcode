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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *ans=NULL,*temp =NULL;
        int i;
        int k=lists.size();
        int j;
        int count=0;
        while(count!=k)
        {
            j=0;
            int min=INT_MAX;
            for(i=0;i<k;i++)
            {
                if(lists[i]&&lists[i]->val<min)
                {
                    min=lists[i]->val;
                    j=i;
                }
            }
            if(ans==NULL)
            {
                ans=lists[j];
                temp=ans;
                if(lists[j]!=NULL)
                lists[j]=lists[j]->next;
                if(temp!=NULL)
                temp->next=NULL;
            }
            else if(temp!=NULL)
            {
                temp->next=lists[j];
                temp=lists[j];
                if(lists[j]!=NULL)
                lists[j]=lists[j]->next;
                if(temp!=NULL)
                temp->next=NULL;
            }
            if(lists[j]==NULL)
            {
                count++;
            }
        }
        return ans;
    }
};