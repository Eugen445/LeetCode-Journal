//Tiem : 2021_5_22
#include <iostream>
using namespace std;


//Definition for singly-linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode() :val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode (int x, ListNode *next) : val(x), next(nullptr) {}
};


//Using virtual head node
//Time Complexity: O(n)
//Space Complexity: O(n)
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		ListNode *dummyHead = new ListNode(-1);
		ListNode *aid = dummyHead;
		ListNode *cur1 = l1, *cur2 = l2;
		int sum = 0;
		int carry = 0;

		while (cur1 || cur2) {

			int val1 = cur1 ? cur1->val : 0;
			int val2 = cur2 ? cur2->val : 0;
			sum = val1 + val2 + carry;
			carry = sum / 10;

			aid->next = new ListNode(sum % 10);
			aid = aid->next;

			if (cur1) cur1 = cur1->next;
			if (cur2) cur2 = cur2->next;
		}
		if (carry >= 1) aid->next = new ListNode(carry);
		return dummyHead->next;
	}
};

void creatTestCase(ListNode** l1, ListNode **l2)
{
	ListNode *cur1 = *l1, *cur2 = *l2;
	int len1, len2;
	cin >> len1 >> len2;
	while (len1--) {
		int val1;
		cin >> val1;
		if (!*l1) {
			*l1 = cur1 = new ListNode(val1);
		}
		else {
			cur1->next = new ListNode(val1);
			cur1 = cur1->next;
		}
	}
	while (len2--) {
		int val2;
		cin >> val2;
		if (!*l2) {
			*l2 = cur2 = new ListNode(val2);
		}
		else {
			cur2->next = new ListNode(val2);
			cur2 = cur2->next;
		}
	}
}

void creatTestCase(ListNode* l1, ListNode *l2) 
{
	ListNode *aid1 = l1, *aid2 = l2;

	int len1, len2;
	cin >> len1 >> len2;
	while (len1--) {
		int val1;
		cin >> val1;
		aid1->next = new ListNode(val1);
		aid1 = aid1->next;
	}
	while (len2--) {
		int val2;
		cin >> val2;
		aid2->next = new ListNode(val2);
		aid2 = aid2->next;
	}
}


void printList(ListNode* root) 
{
	ListNode *aid = root;
	while (aid) {
		cout << aid->val << " ";
		aid = aid->next;
	}
	cout << endl;
}

int main()
{
	ListNode *l1 = nullptr, *l2 = nullptr;
	//creatTestCase(l1, l2);	//这样写的错误在哪？ //l1,l2在函数内有值,出去就为空
	creatTestCase(&l1, &l2);	//需要传地址 //这个需要传2级指针
	printList(Solution().addTwoNumbers(l1, l2));
	


	ListNode l3, l4; //这里是包含虚拟头结点
	//原因ListNode() :val(0), next(nullptr) {} 使得creatTestCase不太好写
	creatTestCase(&l3, &l4);	//是上面函数的重载
	printList(Solution().addTwoNumbers(l3.next, l4.next));
	
	return 0;
}
