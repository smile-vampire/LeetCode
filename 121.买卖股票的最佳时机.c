/*
 * @lc app=leetcode.cn id=121 lang=c
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start

//当在第i天买股票只要记得前i-1天的最小值就能算出相对最大插值
//遍历就能得到最大利润
int maxProfit(int* prices, int pricesSize){
    if(prices==NULL||pricesSize<2)
        return 0;
    int min=prices[0];
    int maxprice=prices[1]-min;
    for(int i=2;i<pricesSize;++i)
    {
        if(prices[i-1]<min)
            min=prices[i-1];
        int differt=prices[i]-min;
        if(differt>maxprice)
            maxprice=differt;
    }
    if(maxprice<0)
        return 0;
    else
       return maxprice;
}


// @lc code=end

