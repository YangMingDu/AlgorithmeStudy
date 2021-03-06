struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* pre = nullptr;
        ListNode* cur = head;
        while(cur != nullptr){
            ListNode* next = cur->next;

            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    void reorderList(ListNode* head) {

        if(head == nullptr || head->next == nullptr || head->next->next == nullptr){
            return;
        }
        //快慢指针
        ListNode* slow = head;
        ListNode* fast = head;
        //求出中点节点
        while(fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }


        //分出后段链表
        ListNode* L2 = slow->next;
        slow->next = nullptr;
        //翻转
        L2 = reverse(L2);

        ListNode* L1cur = head;
        ListNode* L2cur = L2;
        //依次插入前一段链表
        while(L1cur != nullptr && L2cur != nullptr){

            ListNode* L1next = L1cur->next;
            ListNode* L2next = L2cur->next;

            L1cur->next = L2cur;
            L2cur->next = L1next;

            L1cur = L1next;
            L2cur = L2next;


        }



    


    }
};