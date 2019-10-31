/*
 * @lc app=leetcode.cn id=28 lang=c
 *
 * [28] 实现 strStr()
 */

// @lc code=start


int strStr(char * haystack, char * needle){
    char* head=haystack;
    int tmp;
    if (*needle == 0) return 0;
    if (*haystack == 0) return -1;
    while(*haystack)
    {
        tmp=0;
        while(1)
        {
            if(needle[tmp]=='\0')
            return haystack-head;
            if(haystack[tmp]=='\0')
            return -1;
            if(needle[tmp]!=haystack[tmp])
            break;
            tmp++;
        }
      haystack++;
    }
    return -1;
}

// @lc code=end

