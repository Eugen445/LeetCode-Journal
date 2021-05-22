#include <iostream>
using namespace std;

//Definition for singly-linked list
struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//Using the longest list in l1 and l2 as the result list //ʹ��l1��l2�г��ȳ���������Ϊ�������
//Time Complexity: O(n)
//Space Complexity: O(1)
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

		int len1 = getLen(l1), len2 = getLen(l2);
		ListNode *aid1 = len1 > len2 ? l1 : l2; //ȡ������
		ListNode *aid2 = len1 > len2 ? l2 : l1; //ȡ������
		ListNode *pre = nullptr;

		int sum = 0;
		int carry = 0;
		while (aid1) {

			int val1 = aid1->val;
			int val2 = aid2 ? aid2->val : 0;
			sum = val1 + val2 + carry;
			carry = sum / 10;

			aid1->val = sum % 10;
			pre = aid1;
			aid1 = aid1->next;
			if (aid2) aid2 = aid2->next;
		}
		//aid1�����ǵ�״̬Ϊ��,����Ϊ�����ǳ��������һ���ڵ��next(nullptr),ʵ��Ӧ����û��������
		//if (carry >= 1) aid1 = new ListNode(carry); //����������ֵ�ǲ���Ӱ������Ľ����,���Եö���һ��preָ��,��¼aid1��ǰһ�ε�״̬
		if (carry >= 1) pre->next = new ListNode(carry);
		return len1 > len2 ? l1 : l2;
	}
private:
	int getLen(ListNode *aid) {
		int ans = 0;
		while (aid)
			++ans, aid = aid->next;
		return ans;
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
	creatTestCase(&l1, &l2);
	printList(Solution().addTwoNumbers(l1, l2));

	ListNode l3, l4;
	creatTestCase(&l3, &l4);
	printList(Solution().addTwoNumbers(l3.next, l4.next));

	return 0;
}