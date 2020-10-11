/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string ret,ret_temp;
        int size_max=0,add_tmp=0,addnow=0;
        if (a.size()>b.size())
        {
            size_max =a.size();
        }else
        {
            size_max = b.size();
        }

        for(int i = 0; i<size_max ; i++)
        {
            unsigned char a_num = 0 , b_num = 0;
            if(i<a.size())
            {
                if(a[a.size()-i-1] == '1')
                {
                    a_num = 1;
                }else
                {
                    a_num = 0;
                }
                
            }else
            {
                a_num = 0;
            }

            if(i<b.size())
            {
                if(b[b.size()-i-1] == '1')
                {
                    b_num = 1;
                }else
                {
                    b_num = 0;
                }
            }else
            {
                b_num = 0;
            }
            add_tmp = a_num + b_num +addnow;
            if (add_tmp>=2)
            {
                addnow = 1;
                add_tmp-=2;
            }else
            {
                addnow = 0;
            }
            
            if(add_tmp)
            {
                ret_temp += '1';
            }else
            {
                ret_temp += '0';
            }
        }

        if (addnow)
        {
            ret_temp += '1';
        }
        

        for(int i = 0; i< ret_temp.size(); i++)
        {
            ret+=ret_temp[ret_temp.size() - i - 1];
        }
        return ret;
    }
};
// @lc code=end

