快速排序（优化）：

1.利用插入排序在近乎有序数组时效率更高，在已经进行到小区间时利用插入排序。
2.如果数组完全有序，那么如果每次用第一个元素当成标定点，算法会退化为O（n²），所以要使用随机化标定点，用srand随机种子，在partition中将随机的标定点与最左边的元素交换即可。