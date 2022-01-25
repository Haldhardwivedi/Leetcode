class Solution {
public:
    void solution(vector<char>& s,int left,int right)
    {
        if(left>right)
            return;
        else 
        {
            char swap=s[left];
            s[left]=s[right];
            s[right]=swap;
            solution(s,left+1,right-1);
        }
    }
    void reverseString(vector<char>& s) {
        solution(s,0,s.size()-1);
        //cout<<s<<endl;
    }
};