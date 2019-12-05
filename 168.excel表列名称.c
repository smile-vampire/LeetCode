/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 */

// @lc code=start


char * convertToTitle(int n){
    char* string=0;
    --n;
    while(n>=0)
    {
        string=(n%26)+'A';
        n=n/26;
        --n;
    }
    reverse(string,0,strlen(string));
    return string;
}
void reverse(char* string,int left,int right)
{
    while(left<right)
    {
        char* tmp=string[left];
        string[left++]=string[right];
        string[right--]=tmp;
    }
}


// @lc code=end

