class Solution {
public:
    static bool sortbysecdesc( pair<int,int> &a, pair<int,int> &b)
    {
           return a.second>b.second;
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        int i,j;
        map<int,vector<int>>m;
        map<int,int>m1;
        for(i=0;i<roads.size();i++)
        {
            m[roads[i][0]].push_back(roads[i][1]);
            m[roads[i][1]].push_back(roads[i][0]);
            m1[roads[i][0]]++;
            m1[roads[i][1]]++;
        }
        vector<pair<int,int>>vect;
        for(i=0;i<n;i++)
        {
            vect.push_back({i,m1[i]});
        }
        sort(vect.begin(), vect.end(),sortbysecdesc);
        map<int,int>cost;
        int c=n;
        for(i=0;i<vect.size();i++)
        {
            //cout<<vect[i].first<<" "<<vect[i].second<<endl;
            cost[vect[i].first]=c;
            c--;
        }
        long long int ans=0;
        for(i=0;i<n;i++)
        {
            ans+=(cost[i]*m[i].size());
        }
        return ans;
    }
};