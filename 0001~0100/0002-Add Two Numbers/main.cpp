#include <iostream>
#include <list>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Create New LinkedList for result
//Time Complexity: O(n)
//Space Complexity: O(n)

class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode *head = nullptr;
		ListNode *tail = nullptr;
		int sum = 0;
		int carry = 0;
		int v1 = 0, v2 = 0;

		while (l1 || l2) {
			v1 = l1 ? l1->val : 0;
			v2 = l2 ? l2->val : 0;
			sum = v1 + v2 + carry;
			carry = sum / 10;
			if (head == nullptr)
				head = tail = new ListNode(sum % 10);
			else {
				tail->next = new ListNode(sum % 10);
				tail = tail->next;
			}
			if (l1) l1 = l1->next;
			if (l2) l2 = l2->next;
		}
		if (carry >= 1) tail->next = new ListNode(carry);
		return head;
	}
};

void printList(ListNode *root) 
{
	ListNode *cur = root;
	while (cur) {
		cout << cur->val << " ";
		cur = cur->next;
	}
	cout << endl;
}

int main()
{
	//Opportunism is not advisable //投机取巧不可取
	//ListNode *l1 = new ListNode(2), *l2 = new ListNode(5);
	//ListNode *cur1 = l1;
	//ListNode *cur2 = l2;
	//int len = 2;
	//while (len--) {
	//	int val1, val2;
	//	cin >> val1 >> val2;
	//	cur1->next = new ListNode(val1);
	//	cur1 = cur1->next;
	//	cur2->next = new ListNode(val2);
	//	cur2 = cur2->next;
	//}

	ListNode *l1 = nullptr, *l2 = nullptr;
	ListNode *cur1 = nullptr, *cur2 = nullptr;
	int len1, len2;
	cin >> len1 >> len2;
	while (len1--) {
		int value1;
		cin >> value1;
		if (!l1) {
			l1 = cur1 = new ListNode(value1);
		}
		else {
			cur1->next = new ListNode(value1);
			cur1 = cur1->next;
		}
	}
	while (len2--) {
		int value2;
		cin >> value2;
		if (!l2) {
			l2 = cur2 = new ListNode(value2);
		}
		else {
			cur2->next = new ListNode(value2);
			cur2 = cur2->next;
		}
	}
	printList(Solution().addTwoNumbers(l1, l2));
	return 0;
}
