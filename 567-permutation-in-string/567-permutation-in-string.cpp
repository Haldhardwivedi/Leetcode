class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int i;
        map<char,int>m;
        for(i=0;i<s2.size();i++)
        {
            m[s2[i]]++;
        }
        for(i=0;i<s1.size();i++)
        {
            if(m[s1[i]]==0)
                return false;
        }
        int flag=0;
        sort(s1.begin(),s1.end());
        for(i=0;i<s2.size();i++)
        {
            string s;
            if(i+s1.size()<=s2.size())
            {
                s=s2.substr(i,s1.size());
                sort(s.begin(),s.end());
                if(s1==s)
                {
                    flag=1;
                    break;
                }
            }
            else 
                break;
        }
        //cout<<flag<<endl;
        if(flag)
            return true;
        else 
            return false;
    }
};