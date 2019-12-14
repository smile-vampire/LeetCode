/*
 * @lc app=leetcode.cn id=14 lang=c
 *
 * [14] 最长公共前缀
 */

// @lc code=start


char * longestCommonPrefix(char ** strs, int strsSize){
    int i,count=0;
    //开辟新的空间返回最长数组
    char* result = malloc(1000);
    //两个循环保证记录最长的公众字符串
    while(strsSize>0)
    {
        char c = strs[0][count];
        for(i=1;i<strsSize;i++)
        {
            //如果后面的不和第一个相等那么结束
            if(c!=strs[i][count])
            {
                break;
            }
        }
        //如果每个值都相等 那么继续看第二个是否匹配
        if(i==strsSize && c!='\0')
        {
            result[count]=c;
            count++;
        }
        //如果其中一个不相等或者判断结束  那么结束
        else
        {
            break;
        }
    }
     result[count++]='\0';
     return result;   
  
}


// @lc code=end

