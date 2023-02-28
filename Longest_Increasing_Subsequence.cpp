Given an array of integers, find the length of the longest (strictly) increasing subsequence from the given array.

Example 1:

Input:
N = 16
A[]={0,8,4,12,2,10,6,14,1,9,5
     13,3,11,7,15}
Output: 6
Explanation:Longest increasing subsequence
0 2 6 9 13 15, which has length 6

https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1

class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       // your code here
       int ans[n];
       for(int i=0;i<n;i++)
       {
           ans[i]=1;
       }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<i;j++)
           {
               if(a[j]<a[i])
               ans[i]=max(ans[i],ans[j]+1);
           }
       }
       int ans1=INT_MIN;
      for(int i=0;i<n;i++)
      { 
          ans1=max(ans1,ans[i]);
          
      }
    return ans1;
    }
};