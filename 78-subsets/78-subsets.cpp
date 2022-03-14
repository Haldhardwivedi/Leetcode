class Solution {
public:
    vector<vector<int>>ans;
    set<vector<int>>s;
    void help(vector<int>& nums,vector<int>sub,int i){
        if(i<=nums.size())
        {
            if(!sub.empty())
            {
                s.insert(sub);
            }
            if(i<nums.size())
            {
                sub.push_back(nums[i]);
                help(nums,sub,i+1);
                sub.pop_back();
            }
            help(nums,sub,i+1);
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>sub;
        ans.clear();
        ans.push_back(sub);
        help(nums,sub,0);
        for(auto it=s.begin();it!=s.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
    }
};