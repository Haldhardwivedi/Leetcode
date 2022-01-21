// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    int memo[1002][1002];
    int solution(int *wt,int*val,int n,int w)
    {
        if(n==-1||w==-1)
        {
           //memo[n][w]=0;
           return(0);
        }
        else if(memo[n][w]!=-1)
        {
            return(memo[n][w]);
        }
        else
        { 
            if(wt[n]<=w)
            {
                int v1=val[n]+solution(wt,val,n-1,w-wt[n]);
                int v2=solution(wt,val,n-1,w);
                memo[n][w]=max(v1,v2);
                return(memo[n][w]);
            }
            else 
            {
                memo[n][w]=solution(wt,val,n-1,w);;
                return(memo[n][w]);
            }
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       memset(memo,-1,sizeof(memo));
       solution(wt,val,n-1,W);
       return(memo[n-1][W]);
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends