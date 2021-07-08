#### [剑指 Offer 06. 从尾到头打印链表](https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/)

```
1.deque
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
    vector<int> reversePrint(ListNode* head) {

        ListNode *aid = head;
        deque<int> dq;

        while (aid) {

            dq.push_front(aid->val);
            aid = aid->next;
        }

        return vector<int> (dq.begin(), dq.end());
    }
};
```

