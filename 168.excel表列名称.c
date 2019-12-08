/*
 * @lc app=leetcode.cn id=168 lang=c
 *
 * [168] Excel表列名称
 */

// @lc code=start


char * convertToTitle(int n){
    int len = 0, tmp = n;
    while (tmp){
        len++;
        tmp = (tmp - 1) / 26;
    }
    char *res = (char*)malloc(len + 1);
    tmp = n;
    res[len] = 0;
    while (len--){
        res[len] = (tmp - 1) % 26 + 'A';
        tmp = (tmp - 1) / 26;
    }
    return res;
}



// @lc code=end

