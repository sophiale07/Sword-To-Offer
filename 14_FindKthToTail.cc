/*输入一个链表，输出该链表中倒数第k个结点。*/
#include <iostream>
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
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k){ 
        if(pListHead == NULL || k <=0){
            return NULL;
        }
        ListNode *fast = pListHead;
        ListNode *slow = pListHead;
        for(int i = 1; i < k; ++i){
            if(fast->next != NULL){
           	    fast = fast -> next;
            }
            else return NULL;
        }
        while(fast->next != NULL){
            fast = fast -> next;
            slow = slow -> next;
        }
        return slow;
    }
};