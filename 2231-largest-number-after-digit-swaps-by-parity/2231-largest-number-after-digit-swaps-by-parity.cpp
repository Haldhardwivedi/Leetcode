class Solution {
public:
    int largestInteger(int num) {
        int n=num;
        int i;
        string s,e,o;
        while(n)
        {
            int d=n%10;
            s+=(d+48);
            if(d%2)
                o+=(d+48);
            else 
                e+=(d+48);
            n=n/10;
        }
        sort(e.begin(),e.end());
        sort(o.begin(),o.end());
        i=0;
        int j=0;
        int k=0;
        while(i<s.size())
        {
            if((s[i]-48)%2)
            {
                s[i]=o[j];
                j++;
            }
            else 
            {
                s[i]=e[k];
                k++;
            }
            i++;
        }
        n=0;
        i=0;
        long long int p=1;
        while(i<s.size())
        {
            n+=(s[i]-48)*p;
            p=p*10;
            i++;
        }
        return n;
    }
};