#include<bits/stdc++.h>
using namespace std;
    int find_ans(int w,int wt[],int val[],int n)
    {
        if(w==0 || n==0)
        {
            return 0;
        }
        if(wt[n-1]<=w)
        {
            return max(val[n-1]+find_ans(w-wt[n-1],wt,val,n-1),find_ans(w,wt,val,n-1));
        }
        else
        {
            return find_ans(w,wt,val,n-1);
        }
    }
  int main()
    { 
       int w=4;
       int n=3;
       int wt[]={4,5,1};
       int val[]={1,2,3};
       cout<<find_ans(w,wt,val,n);
       
    }
