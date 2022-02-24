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
    string s;
    int sumNumbers(TreeNode* root) {
        if(root==NULL)
            return 0;
        s+=48+root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            //cout<<s<<endl;
            long long int ans=stoi(s);
            s.pop_back();
            return ans;
        }
        else 
        {
            int s1=sumNumbers(root->left);
            int s2=sumNumbers(root->right);
            s.pop_back();
            return(s1+s2);
        }
    }
};