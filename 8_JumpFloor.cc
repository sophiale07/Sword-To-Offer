/*一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。*/

#include <iostream>
using namespace std;

class Solution {
public:
    int jumpFloor(int number) {
        	int prepreNum = 1;
            int preNum = 2;
      	  	int result = 0;
        	if(number == 0) return 0;
        	if(number == 1) return 1;
            if(number == 2) return 2;
        	for(int i = 3; i <= number; ++i){
            	result = prepreNum + preNum;
           	 	prepreNum = preNum;
                preNum = result;
        	}
        	return result;

    }
};