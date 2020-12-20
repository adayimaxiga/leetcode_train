/*
 * @lc app=leetcode.cn id=363 lang=cpp
 *
 * [363] 矩形区域不超过 K 的最大数值和
 */

// @lc code=start
class Solution {
public:
    //time limit !!!
    int sum_martix(int s_i,int s_j,int e_i, int e_j, vector<vector<int>>& matrix_plus_save)
    {
        return matrix_plus_save[e_i][e_j] - matrix_plus_save[s_i][e_j]- matrix_plus_save[e_i][s_j] + matrix_plus_save[s_i][s_j];
    }

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        vector<vector<int>> matrix_sum_save;
        matrix_sum_save.resize(matrix.size()+1);
        /*扩充矩阵计算，方便后续计算每个矩阵*/
        for(int i = 0;i < matrix_sum_save.size(); i++)
        {
            matrix_sum_save[i].resize(matrix[0].size()+1);
        }
        for(int i = 0; i < matrix_sum_save.size();i++)
        {
            for(int j = 0;j < matrix_sum_save[0].size();j++)
            {
                if(i == 0 || j == 0)
                {
                    matrix_sum_save[i][j] = 0;
                }else
                {
                    matrix_sum_save[i][j] = matrix[i-1][j-1];
                }
            }
        }

        for(int i = 1;i < matrix_sum_save.size();i++)
        {
            for(int j = 1; j < matrix_sum_save[0].size(); j++)
            {
                matrix_sum_save[i][j] += matrix_sum_save[i-1][j] + matrix_sum_save[i][j-1] - matrix_sum_save[i-1][j-1];
            }
        }
        int max_sum = 0x80000000;
        /* 遍历 */
        for(int x_s = 0; x_s < matrix_sum_save.size()-1; x_s++)
        {
            for(int y_s = 0; y_s < matrix_sum_save[0].size()-1; y_s++)
            {
                for(int y_e = y_s + 1; y_e < matrix_sum_save[0].size(); y_e++)
                {
                    for(int x_e = x_s + 1; x_e < matrix_sum_save.size(); x_e++)
                    {
                        int sum_tmp = sum_martix(x_s,y_s,x_e,y_e,matrix_sum_save);
                        if(sum_tmp <= k)
                        {
                            if(sum_tmp > max_sum)
                            {
                                max_sum = sum_tmp;
                            }
                        }
                    }
                }
            }
        }
        return max_sum;
    }
};
// @lc code=end

