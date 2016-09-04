/*给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。*/
#include <iostream>
using namespace std;


class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1.0;
        if(exponent < 0){
            for(int i = exponent; i < 0; ++i){
                result *= base;
            }
            return 1/result;
        }
        if(exponent ==0) return 1;
        for(int i = 0; i < exponent; ++i){
            result *= base;
        }
        return result;
    }
};