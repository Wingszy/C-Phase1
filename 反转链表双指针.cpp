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
	ListNode* reverseList(ListNode* head) {
		ListNode* temp; // ����cur����һ���ڵ�
		ListNode* cur = head;
		ListNode* pre = NULL;
		while (cur) {
			temp = cur->next;  // ����һ�� cur����һ���ڵ㣬��Ϊ������Ҫ�ı�cur->next
			cur->next = pre; // ��ת����
			// ����pre �� curָ��
			pre = cur;
			cur = temp;
		}
		return pre;
	}
};