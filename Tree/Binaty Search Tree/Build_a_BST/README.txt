二分搜索树：

不一定要完全二叉树，每个节点的值大于左孩子，小于右孩子，以左右孩子为根的子树仍为二分搜索树。
每个节点的值都大于其左子树的所有节点的值
每个节点的值都小于其右子树的所有节点的值

高效，不仅可以查找数据，还可以高效的插入和删除数据，动态维护数据，可以方便的回答很多数据之间的关系问题：

min,max,floor,ceil,rank,select...