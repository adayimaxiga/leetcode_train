/*
 * @lc app=leetcode.cn id=378 lang=cpp
 *
 * [378] 有序矩阵中第K小的元素
 */

// @lc code=start
class Solution {
public:
    int guess(int g,vector<vector<int>>& matrix,int k, int n)
    {
        int sum1 = 0;
        for(int i=0;i<n;i++)
        {
            int l = 0;
            int r = n-1;
            int ans = -1;
            while(l <= r)
            {
                int mid = (l+r)/2;
                if(matrix[i][mid] < g)
                {
                    ans = mid;
                    l = mid +1;
                }else
                {
                    r = mid -1;
                }
                
            }
            sum1 += (ans+1);
        }
        /*
        int sum2 = 0;
        for(int i=0;i<n;i++)
        {
            int l = 0;
            int r = n-1;
            int ans = -1;
            while(l <= r)
            {
                int mid = (l+r)/2;
                if(matrix[i][mid] <= g)
                {
                    ans = mid;
                    l = mid +1;
                }else
                {
                    r = mid -1;
                }
            }
            sum2 += (ans+1);
        }
        */
        return k>sum1 ;
    }
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        int r = matrix[n-1][n-1];
        long l = matrix[0][0];
        int ans = 0;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(guess(mid , matrix, k,n))
            {
                ans = mid;
                l = mid +1;
            }else
            {
                r = mid -1;
            }
        }
        return ans;
    }
};
// @lc code=end

