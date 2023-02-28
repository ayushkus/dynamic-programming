Given an array of n positive integers. Find the sum of the maximum sum subsequence of the given array such that the integers in the subsequence are sorted in strictly increasing order i.e. a strictly increasing subsequence. 

Example 1:

Input: N = 5, arr[] = {1, 101, 2, 3, 100} 
Output: 106
Explanation:The maximum sum of a
increasing sequence is obtained from
{1, 2, 3, 100}


https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article



class Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int lcs[n];
	    for(int i=0;i<n;i++)
	    {
	        lcs[i]=arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[j]<arr[i])
	            {
	                lcs[i]=max(lcs[i],lcs[j]+arr[i]);
	            }
	        }
	    }
	    int ans=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        ans=max(ans,lcs[i]);
	    }
	    return ans;
	}  
};