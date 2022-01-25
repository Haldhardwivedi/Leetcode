class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int,int>m;
        int i,n=time.size();
        for(i=0;i<n;i++)
        {
            time[i]=time[i]%60;
            m[time[i]]++;
        }
        int count=0;
        for(i=0;i<n;i++)
        {
            if(m[60-time[i]]&&time[i]!=30&&time[i]!=0)
            {
                //cout<<60-time[i]<<endl;
                count=count+(m[60-time[i]])*m[time[i]];
                m[time[i]]=0;
                m[60-time[i]]=0;
                //cout<<time[i]<<endl;
            }
            //cout<<time[i]<<" ";
        }
        // for(i=0;i<n;i++)
        // {
        //    cout<<time[i]<<endl;
        // }
        //cout<<endl;
        //cout<<m[0]<<endl;
        if(m[30])
            count=count+(m[30]*(m[30]-1))/2;
        if(m[0])
            count=count+(m[0]*(m[0]-1))/2;
        //cout<<count<<endl;
        return count;
    }
};