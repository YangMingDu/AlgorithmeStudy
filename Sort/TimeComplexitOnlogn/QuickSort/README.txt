快速排序：

随机选择一个（本次为最左边的元素）元素作为基点，之后将选择的元素交换到排好顺序的时候它应该处于的位置，（从小到大）把小于它的元素放到它的前面，把大于它的元素放到他的后面，然后使用递归，将它前面的所有元素再进行一轮快速排序，后面同理，直到全部排完。