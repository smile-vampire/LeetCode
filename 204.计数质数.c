/*
 * @lc app=leetcode.cn id=204 lang=c
 *
 * [204] 计数质数
 */

// @lc code=start



int countPrimes(int n){
    int count = 0;
    int * num = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        num[i] = 1;
    }
    
    for(int i = 2; i < n; i++) {
        if(num[i] == 1) {
            for(int j = 2; i*j < n; j++ ) {
                num[i*j] = 0;
            }
            count++;
        }
    }
    return count;
}



// @lc code=end

