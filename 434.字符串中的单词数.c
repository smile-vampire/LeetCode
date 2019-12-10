/*
 * @lc app=leetcode.cn id=434 lang=c
 *
 * [434] 字符串中的单词数
 */

// @lc code=start

//遇到空格count+1 但是必须保证上一个单词存在
int countSegments(char * s){
    int count=0;
    int flag=0;
    while(*s!='\0')
    {
        
        if(*s!=' ')
        {
            flag=1;
        }
        if(*s==' '&& flag==1)
        {
            count++;
            flag=0;
        }
        s++;      
    }
    if(flag==1) 
        count++;
    return count;
}


// @lc code=end

