#include<iostream>
using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		ListNode*dummyhead = new ListNode();//����һ��ͷ����ڵ�
		dummyhead->next = head;
		ListNode*cur = dummyhead;
		while (cur->next != NULL) {
			if (cur->next->val == val) {
				ListNode* tmp = cur->next;
				cur->next = cur->next->next;//������ʱ�ڵ���
				delete tmp;
			}
			else {
				cur = cur->next;
			}
		}
		head = dummyhead->next;//�ֶ�ɾ����������ʱ�ڵ�
		delete dummyhead;
		return head;
	}
};