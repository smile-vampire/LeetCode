/*
 * @lc app=leetcode.cn id=88 lang=c
 *
 * [88] 合并两个有序数组
 */

// @lc code=start

//用双指针分别指向最后一个元素向前遍历如果谁大放到nums1中  
//如果从前遍历会覆盖后面的值
//当遍历完成可能数组2还没有插入完成再把数组2插入其中
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int len1=m-1;
    int len2=n-1;
    int tail=m+n-1;
    while(len1>=0 && len2>=0)
    {
        nums1[tail--]=nums1[len1]>nums2[len2]?nums1[len1--]:nums2[len2--];
    }
    //跳出循环还可能nums2不为空直接将他发放到数组1中
    while(len2>=0)
    {
         nums1[tail--]=nums2[len2--];
    }
}


// @lc code=end

