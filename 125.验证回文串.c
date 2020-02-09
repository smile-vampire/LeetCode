/*
 * @lc app=leetcode.cn id=125 lang=c
 *
 * [125] 验证回文串
 */

// @lc code=start


bool isPalindrome(char * s){
    int len = strlen(s);
    char* ans = (char*)malloc(sizeof(char)*len);
    int j = 0;

    for(int i =0 ; i < len; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            ans[j++] = s[i]-32;
        }
        else if((s[i] >= 'A' && s[i] <='Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            ans[j++] = s[i];
        }
    }

    for(int i =0; i<(j/2); i++)
    {
        if(ans[i] != ans[j-1-i])
        {
            return false;
        }
    }
    return true;
}


// @lc code=end

