/*
 * @lc app=leetcode.cn id=345 lang=c
 *
 * [345] 反转字符串中的元音字母
 */

// @lc code=start


char * reverseVowels(char * s){
    int a=0;
    int b=strlen(s);
    while(a<b)
    {
        if(s[a]=='a'||s[a]=='e'||s[a]=='i'||s[a]=='o'||s[a]=='u'
            ||s[a]=='A'||s[a]=='E'||s[a]=='I'||s[a]=='O'||s[a]=='U')
        {
            if(s[b]=='a'||s[b]=='e'||s[b]=='i'||s[b]=='o'||s[b]=='u'
            ||s[b]=='A'||s[b]=='E'||s[b]=='I'||s[b]=='O'||s[b]=='U')
            {
                char tmp=s[a];
                s[a++]=s[b];
                s[b--]=tmp;
            }
            else
            {
                b--;
            }
        }
        else
        {
            a++;
        }
        
    }
    return s;
}


// @lc code=end

