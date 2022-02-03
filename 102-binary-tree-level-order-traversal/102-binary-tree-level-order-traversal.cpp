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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>s;
        s.push(root);
        while(!s.empty())
        {
            queue<TreeNode*>s1;
            vector<int>v;
            while(!s.empty())
            {
                s1.push(s.front());
                if(s.front()!=NULL)
                v.push_back(s.front()->val);
                s.pop();
            }
            ans.push_back(v);
            while(!s1.empty())
            {
                if(s1.front()!=NULL&&s1.front()->left!=NULL)
                    s.push(s1.front()->left);
                 if(s1.front()!=NULL&&s1.front()->right!=NULL)
                    s.push(s1.front()->right);
                s1.pop();
            }
        }
        return ans;
    }
};