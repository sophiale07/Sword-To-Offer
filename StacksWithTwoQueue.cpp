#include<iostream>
#include<queue>
using namespace std;

// 利用两个队列实现一个栈功能

class Solution
{
public:
    void push(int node) {
         queue1.push(node);
    }

    int pop() {
        int head;
        if(queue2.empty())//如果queue2为空
        {
          while(queue1.front() != queue1.back())//保证queue1中有一个元素，其余保存到queue2
	  {
		head = queue1.front();
                queue1.pop();
       		queue2.push(head);
       		
	  }
          head = queue1.front();
          queue1.pop();
          return head;
        }
        else //如果queue1为空
        {
         while(queue2.front() != queue2.back())//保证queue2中有一个元素，其余保存到queue1
	  {
		head = queue2.front();
                queue2.pop();
       		queue1.push(head);
       		
	  }
          head = queue2.front();
          queue2.pop();
          return head;

        }
    }

private:
    queue<int> queue1;
    queue<int> queue2;
};

int main(){
    Solution solution;
    int a[5] = {1,2,3,4,5};
    for(int i = 0; i < 5; ++i)
    {
      solution.push(a[i]);
    }
    for(int i = 0; i < 5; ++i)
    {
      cout<<solution.pop()<<" ";
    }
      cout<<endl;
    return 0;
}
