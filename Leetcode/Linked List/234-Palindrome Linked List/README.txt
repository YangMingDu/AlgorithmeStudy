请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false
示例 2:

输入: 1->2->2->1
输出: true

思路：和143题几乎一样，快慢指针分割链表，然后翻转第二段，依次查看值是否相等即可。