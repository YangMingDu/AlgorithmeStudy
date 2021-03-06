class Solution {
public:
    //时间:o(1) 空间：o(1)
    //任何大于1的数都可由2和3相加组成
    //当n>=5时,将它剪成2或3的绳子段,2(n-2) > n,3(n-3) > n,都大于他未拆分前的情况，
    //当n>=5时，3(n-3) >= 2(n-2),所以我们尽可能地多剪3的绳子段
    //当绳子长度被剪到只剩4时，2 * 2 = 4 > 1 * 3,所以没必要继续剪
    int cuttingRope(int n) {
        if(n <= 3)  return n-1;     //如果n<=3,数字要求至少分为两部分，实际结果的最大值为n-1
        long long res = 1;
        while(n > 4)
        {
            n = n - 3;
            res = res * 3 % 1000000007;
        }
        return res * n % 1000000007;
    }
};

