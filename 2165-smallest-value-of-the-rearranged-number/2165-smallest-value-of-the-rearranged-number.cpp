class Solution {
public:
    long long smallestNumber(long long num) {
        if(num>=0)
        {
            string d;
            while(num)
            {
                d.push_back(num%10+48);
                num=num/10;
            }
            sort(d.begin(),d.end());
            int i=0;
            while(d[i]=='0'&&i<d.size())
                i++;
            string ans;
            if(i<d.size())
            ans.push_back(d[i]);
            if(i<d.size())
            ans=ans+d.substr(0,i);
            if(i+1<d.size())
            ans=ans+d.substr(i+1,d.size()-i-1);
            reverse(ans.begin(),ans.end());
            i=0;
            long long int p=1;
            while(i<ans.size())
            {
                num=num+(ans[i]-48)*p;
                p=p*10;
                i++;
            }
            return num;
        }
        else 
        {
            num=num*-1;
            string d;
            while(num)
            {
                d.push_back(num%10+48);
                num=num/10;
            }
            sort(d.begin(),d.end());
            int i=0;
            long long int p=1;
            while(i<d.size())
            {
                num=num+(d[i]-48)*p;
                p=p*10;
                i++;
            }
            return(num*-1);
        }
    }
};