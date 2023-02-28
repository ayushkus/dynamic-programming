Given an array of digits (values lie in range from 0 to 9). The task is to count all the sub sequences possible in array such that in each subsequence every digit is greater than its previous digits in the subsequence.

 

Example 1:

Input : 
a[] = {1, 2, 3, 4}
Output: 
15
Explanation :
There are total increasing subsequences
{1}, {2}, {3}, {4}, {1,2}, {1,3}, {1,4},
{2,3}, {2,4}, {3,4}, {1,2,3}, {1,2,4},
{1,3,4}, {2,3,4}, {1,2,3,4}

https://practice.geeksforgeeks.org/problems/count-increasing-subsequences3134/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab



class Solution{
    public:
    unsigned long long int countSub(int arr[], int n)
    {
        // Your code goes here
        int lcs[n];
        for(int i=0;i<n;i++)
        {
            lcs[i]=1;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(arr[j]<arr[i])
                {
                    lcs[i]=lcs[i]+lcs[j];
                }
            }
        }
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans+lcs[i];
        }
        return ans;
    }
};