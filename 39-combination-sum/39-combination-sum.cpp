class Solution {
public:
    vector<vector<int>> ans;
    int sum;
    vector<int>v;
    void solution(vector<int>& candidates, int target,int index)
    {
        if(sum>target||index>=candidates.size())
            return;
        if(sum==target)
        {
            //cout<<sum<<endl;
            ans.push_back(v);
        }
        else 
        {
            //cout<<index<<endl;
            v.push_back(candidates[index]);
            sum+=candidates[index];
            solution(candidates,target,index);
            sum=sum-candidates[index];
            v.pop_back();
            solution(candidates,target,index+1);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sum=0;
        solution(candidates,target,0);
        return(ans);
    }
};