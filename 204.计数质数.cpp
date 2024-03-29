/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */

// @lc code=start
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> isPrime(n+1,true);
        int count = 0;
        
        for(int i = 2; i < n;++i){
            if(isPrime[i]){
                ++count;
                for(int j = 2 ; i*j < n ; ++j){
                    isPrime[i*j] = false;
                }
                
            }
        }
        return count;
    }
};
// @lc code=end

