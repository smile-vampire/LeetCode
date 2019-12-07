/*
 * @lc app=leetcode.cn id=292 lang=c
 *
 * [292] Nim 游戏
 */

// @lc code=start

//如果是4的倍数肯定输
//其他的可以赢
bool canWinNim(int n){
    if(n%4==0)
        return false;
    return true;
}


// @lc code=end

