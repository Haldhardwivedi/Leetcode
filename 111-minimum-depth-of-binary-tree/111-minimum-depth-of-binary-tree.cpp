/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        queue<TreeNode *>q;
        if(root!=NULL)
        q.push(root);
        int d=0;
        while(!q.empty())
        {
            TreeNode *temp;
            queue<TreeNode *>q1;
            d++;
            while(!q.empty())
            {
                temp=q.front();
                if(temp->left==NULL&&temp->right==NULL)
                {
                    return d;
                }
                if(temp->left!=NULL)
                    q1.push(temp->left);
                if(temp->right!=NULL)
                    q1.push(temp->right);
                q.pop();
            }
            q=q1;
        }
        return d;
    }
};