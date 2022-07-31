class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        int ans=0;
        int s=grades.size();
        double val=(-1)+sqrt(1+8*s);
        val=val/2;
        ans=val;
        return ans;
    }
};