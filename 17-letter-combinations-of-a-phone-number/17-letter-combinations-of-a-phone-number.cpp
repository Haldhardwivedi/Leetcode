class Solution {
public:
    map<int,string>m;
    vector<string>ans;
    void solution(string digits,string s,int i)
    {
        //cout<<i<<endl;
        if(i>=digits.size())
        {
            //cout<<s<<endl;
            if(s.size()!=0)
            ans.push_back(s);
        }
        else 
        {
            //cout<<m[i].size()<<endl;
            int j;
            for(j=0;j<m[digits[i]-48].size();j++)
            {
                //cout<<m[digits[i]-48]<<endl;
                s.push_back(m[digits[i]-48][j]);
                solution(digits,s,i+1);
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        int i;
        char ch='a';
        for(i=2;i<=9;i++)
        {
            if(i==7||i==9)
            {
                int j;
                for(j=0;j<=3;j++)
                m[i].push_back(ch+j);
                ch=ch+4;
            }
            else 
            {
                int j;
                for(j=0;j<=2;j++)
                m[i].push_back(ch+j);
                ch=ch+3;
            }
        }
        // for(i=2;i<=9;i++)
        // {
        //     cout<<m[i]<<endl;
        // }
        string s;
        solution(digits,s,0);
        return ans;
    }
};