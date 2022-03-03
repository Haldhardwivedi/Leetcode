class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<pair<int,int>>v;
        int i;
        for(i=0;i<intervals.size();i++)
        {
            v.push_back({intervals[i][0],intervals[i][1]});
        }
        sort(v.begin(),v.end());
        intervals.clear();
        int start=v[0].first;
        int end=v[0].second;
        for(i=1;i<v.size();i++)
        {
            if(v[i].first>end)
            {
                vector<int>ans;
                ans.push_back(start);
                ans.push_back(end);
                start=v[i].first;
                end=v[i].second;
                //cout<<start<<" "<<end<<endl;
                intervals.push_back(ans);
            }
            else 
            {
                start=min(v[i].first,start);
                end=max(v[i].second,end);
            }
        }
        vector<int>ans;
        ans.push_back(start);
        ans.push_back(end);
        intervals.push_back(ans);
        return intervals;
    }
};