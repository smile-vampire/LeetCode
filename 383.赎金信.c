/*
 * @lc app=leetcode.cn id=383 lang=c
 *
 * [383] 赎金信
 */

// @lc code=start


bool canConstruct(char * ransomNote, char * magazine){
    assert(ransomNote);
    assert(magazine);
    char* src=ransomNote;
    char* sub=magazine;
    while(*sub)
    {
        char* start=src;
        char* end=sub;
        while(*src&&*sub==*src&&*src!=' ')
        {
            src++;
            sub++;
        }
        if(*src=='\0')
        {
            return true;
        }
        else
        {
            src=start+1;
            sub=end+1;
        }
    }
    return false;
}


// @lc code=end

