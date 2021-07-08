#### [剑指 Offer 24. 反转链表](https://leetcode-cn.com/problems/fan-zhuan-lian-biao-lcof/)

```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        ListNode *cur = head;
        ListNode *pre = nullptr;

        while (cur) {

            ListNode *aid = cur->next;
            cur->next = pre;
            pre = cur;
            cur = aid;
        }

        return pre;
    }
};
```

