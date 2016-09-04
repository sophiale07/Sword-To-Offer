/*一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。*/

#include <iostream>
using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
       int sum = 1;
       int total = 1;
       if(number == 0) return 0;
	   if(number == 1) return 1;
       for(int i = 2; i <= number; ++i){
           sum = total +1;
           total += sum;
       }
        return sum;
    }
};