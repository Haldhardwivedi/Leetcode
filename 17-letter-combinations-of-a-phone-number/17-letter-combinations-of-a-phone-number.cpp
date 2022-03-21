class Solution {
public:
    map<int,string>m;
    vector<string>ans;
    void help(int index,string digits,string s)
    {
        //cout<<"yo"<<endl;
        if(index==digits.size())
        {
            //cout<<s<<endl;
            if(!s.empty())
            ans.push_back(s);
        }
        else if(index<digits.size())
        {
            //cout<<"yo"<<endl;
            int i;
            for(i=0;i<m[digits[index]-48].size();i++)
            {
                //cout<<m[digits[index]-48]<<endl;
                s.push_back(m[digits[index]-48][i]);
                help(index+1,digits,s);
                s.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        int i;
        string s;
        int num=97;
        for(i=2;i<=9;i++)
        {
            if(i==7||i==9)
            {
                m[i].push_back(num);
                m[i].push_back(num+1);
                m[i].push_back(num+2);
                m[i].push_back(num+3);
                num=num+4;
            }
            else 
            {
                m[i].push_back(num);
                m[i].push_back(num+1);
                m[i].push_back(num+2);
                num=num+3;
            }
        }
        // for(i=2;i<=9;i++)
        // {
        //     cout<<m[i]<<endl;
        // }
        help(0,digits,s);
        return ans;
    }
};