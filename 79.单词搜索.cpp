/*
 * @lc app=leetcode.cn id=79 lang=cpp
 *
 * [79] 单词搜索
 */

// @lc code=start
class Solution {
public:
    vector<vector<char>> a;
    int n;
    int m;
    string word_save;
    vector<vector<bool>> vector_use;
    bool deep_first_search(int start_i, int start_j,int index)
    {
        if(index < word_save.size())
        {
            if(start_i >= 0 && start_i <n && start_j >= 0 && start_j <m)
            {
                if(vector_use[start_i][start_j])
                {
                    return false;
                }
                if(word_save[index] == a[start_i][start_j])
                {
                    vector_use[start_i][start_j] = true;
                    //search next
                    if(deep_first_search(start_i +1, start_j, index+1) || deep_first_search(start_i , start_j + 1, index+1) || deep_first_search(start_i -1, start_j,  index+1)||deep_first_search(start_i, start_j-1, index+1))
                    {
                        return true;
                    }
                    else
                    {
                        vector_use[start_i][start_j] = false;
                        return false;
                    }
                    
                }else
                {
                    return false;
                }
                
            }else
            {
                return false;
            }
            
        }else
        {
            return true;
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        a = board;
        n = a.size();
        if(n == 0)
        return false;
        m = a[0].size();
        if(m == 0)
        return false;
        vector_use.resize(n);
        word_save = word;
        for(int i = 0 ; i< vector_use.size();i++)
        {
            vector_use[i].resize(m);
        }
        for(int i = 0; i< n; i++)
        {
            for(int j = 0; j<m; j++)
            {
                if(word_save[0] == board[i][j])
                {
                    vector_use[i][j] = true;
                    
                    if(deep_first_search(i+1,j,1)||deep_first_search(i-1,j,1)||deep_first_search(i,j+1,1)||deep_first_search(i,j-1,1))
                    {
                        return true;
                    }else
                    {
                        vector_use[i][j] = false;
                    }
                }
            }
        }
        return false;
    }   
};
// @lc code=end

