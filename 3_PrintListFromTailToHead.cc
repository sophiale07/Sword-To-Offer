/*输入一个链表，从尾到头打印链表每个节点的值。 */

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
        int val;
        struct ListNode *next;
        ListNode(int x) :
              val(x), next(NULL) {
        }
};

class Solution {
public:
    vector<int> printListFromTailToHead(struct ListNode* head) {
       vector<int> v;
	   stack<int> st;
	   while(head != NULL){
	       st.push(head->val);
		   head = head->next;
	   }
	   while(!st.empty()){
		   v.push_back(st.top());
		   st.pop();
	   }
	   return v;
  }
};