/*
 * @lc app=leetcode.cn id=242 lang=c
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
//长度如果不相同错误
//如果相同两个数组相减值为0

bool isAnagram(char * s, char * t){
    int len1=strlen(s);
    int len2=strlen(t);
    if(len1!=len2)
        return false;
    int a[26]={0};
    for(int i=0;i<len1;i++)
    {
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0)
            return false;
    }
    return true;
}


// @lc code=end

