/*
 * @lc app=leetcode.cn id=383 lang=c
 *
 * [383] 赎金信
 */

// @lc code=start


bool canConstruct(char * ransomNote, char * magazine){
    for(int i = 0; i < strlen(ransomNote); i++)
    {
        char* src;
        if(src = strchr(magazine,ransomNote[i]))
        *src = 'A';
    else
        return false;
    }
        return true;
}



// @lc code=end

