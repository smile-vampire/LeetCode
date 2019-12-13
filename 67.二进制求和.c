/*
 * @lc app=leetcode.cn id=67 lang=c
 *
 * [67] 二进制求和
 */

// @lc code=start

//比较a和b长度如果谁长开辟新空间长度为谁+1，（可能会有进位）若果一样长随便选择一个
//进行相加  
//最后反转就能得到
 char * addBinary(char * a, char * b){
    int len1 = strlen(a);
    int len2 = strlen(b);
    int len = len1 > len2 ? len1+1 : len2+1;
//开辟新空间
    char* result = malloc(len+1);
    result[len]='\0';
    result[len-1]='\0';

//相加
    int i,j,carry=0;
    len=0;
    for(i=len1-1,j=len2-1;carry||i>=0||j>=0;i--,j--)
    {
        int na = i>=0 ? a[i]-'0': 0;
        int nb = j>=0 ? b[j]-'0': 0;
        result[len++]=(na^nb^carry)+'0';
        carry=carry+na+nb>=2 ? 1 : 0;
    }
//反转
    for(int i=0,j=len-1;i<j;i++,j--)
    {
        char c=result[i];
        result[i]=result[j];
        result[j]=c;
    }
    return result;

}


// @lc code=end

