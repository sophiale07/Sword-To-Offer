#include<iostream>
#include<stack>
using namespace std;


// 利用两个栈实现一个队列功能

class Solution
{
public:
    void push(int node) {
       stack1.push(node);
    }

    int pop() {
        int head;
	if(stack2.empty())
        { 
           while(!stack1.empty())
           {
             head = stack1.top();
             stack1.pop();
             stack2.push(head);    
            }
        }
        head = stack2.top();
        stack2.pop();
        return head;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
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

   
