/*把一个数组最开始的若干个元素搬到数组的末尾，我们称之为数组的旋转。
输入一个非递减排序的数组的一个旋转，输出旋转数组的最小元素。
例如数组{3,4,5,1,2}为{1,2,3,4,5}的一个旋转，该数组的最小值为1。
NOTE：给出的所有元素都大于0，若数组大小为0，请返回0。 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> Array) {
        if(Array.empty())
            return 0;
        int st=0;
        int end=Array.size()-1;
        int mid=(st+end)/2;
        while(st<end){
            if(Array[mid]==Array[st])
                return Array[mid+1];
            else if(Array[mid]>Array[st])
                st=mid;
            else
                end=mid;
            mid=(st+end)/2;
        }
        return 0;
    }
};