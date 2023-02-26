https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    int t[1002][1002];
    int find_ans(int w,int wt[],int val[],int n)
    {
        if(w==0 || n==0)
        {
            return 0;
        }
        if(t[n][w]!=-1)
        {
            return t[n][w];
        }
        if(wt[n-1]<=w)
        {
            return t[n][w]=max(val[n-1]+find_ans(w-wt[n-1],wt,val,n-1),find_ans(w,wt,val,n-1));
        }
        else
        {
            return t[n][w]=find_ans(w,wt,val,n-1);
        }
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       memset(t,-1,sizeof(t));
       return find_ans(W,wt,val,n);
       
    }
};