/*
 * @lc app=leetcode.cn id=912 lang=c
 *
 * [912] 排序数组
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
//  void ShellSort(int* a, int n) {
// 	assert(a);
// 	int gap = n;
// 	//不能写成大于0,因为gap的值始终>=1
// 	while (gap > 1)
// 	{
// 		//只有gap最后为1，才能保证最后有序
// 		//所以这里要加1
// 		gap = gap / 3 + 1;
// 		//这里只是把插入排序的1换成gap即可
// 		//但是这里不是排序完一个分组，再去
// 		//排序另一个分组，而是整体只过一遍
// 		//这样每次对于每组数据只排一部分
// 		//整个循环结束之后，所有组的数据排序完成
// 		for (int i = 0; i < n - gap; ++i)
// 		{
// 			int end = i;
// 			int tmp = a[end + gap];
// 			while (end >= 0 && a[end] > tmp)
// 			{
// 				a[end + gap] = a[end];
// 				end -= gap;
// 			}
// 			a[end + gap] = tmp;
// 		}
// 	}
// }
// void AdjustDown(int* a, int n, int root) {
// 	int parent = root;
// 	int child = parent * 2 + 1;
// 	while (child < n) {
// 		if (child + 1 < n
// 			&& a[child + 1] > a[child]) {
// 			++child;
// 		}
// 		if (a[child] > a[parent]) {
// 			Swap(&a[child], &a[parent]);
// 			parent = child;
// 			child = parent * 2 + 1;
// 		}
// 		else{
// 			break;
// 		}
// 	}
// }
// void HeapSort(int* a, int n) {
// 	assert(a);
// 	// 建堆，先从最后两个叶子上的根(索引为(n - 2) / 2开始建堆
// 	// 先建最小的堆，直到a[0](最大的堆)
// 	// 这就相当于在已经建好的堆上面，新加入一个
// 	// 根元素，然后向下调整，让整个完全二叉树
// 	// 重新满足堆的性质
// 	for (int i = (n - 2) / 2; i >= 0; --i)
// 	{
// 		AdjustDown(a, n, i);
// 	}
// 	//end:表示最后一个位置
// 	int end = n - 1;
// 	//只剩一个数时，就不需要调整了
// 	while (end > 0)
// 	{
// 		//0位置和最后一个位置交换
// 		Swap(&a[0], &a[end]);
// 		AdjustDown(a, end, 0);
// 		--end;
// 	}
// }
int GetMidIndex(int* a, int begin, int end)
{
	int mid = begin + ((end - begin) >> 1);
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
		{
			return mid;
		}
		else if (a[begin] > a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
	else//a[begin] > a[mid]
	{
		if (a[mid] > a[end])
		{
			return mid;
		}
		else if (a[begin] < a[end])
		{
			return begin;
		}
		else
		{
			return end;
		}
	}
}

int PartSort1(int* a, int begin, int end)
{	
	int mid = GetMidIndex(a, begin, end);
	Swap(&a[mid], &a[begin]);
	int key = begin;
	while (begin < end)
	{
		while (begin < end && a[end] >= a[key])
		{
			--end;
		}
		while (begin < end && a[begin] <= a[key])
		{
			++begin;
		}
		Swap(&a[begin], &a[end]);
	}
	Swap(&a[key], &a[begin]);
	return begin;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
		return;
	int keyindex = PartSort1(a, left, right);
	QuickSort(a, left, keyindex - 1);
	QuickSort(a, keyindex + 1, right);
}
int* sortArray(int* nums, int numsSize, int* returnSize){
   // ShellSort(nums,numsSize);
    //HeapSort(nums,numsSize);
    QuickSort(nums,0,numsSize-1);
    *returnSize = numsSize;
    return nums;
}

// @lc code=end

