/*请实现一个函数，将一个字符串中的空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。*/

#include <iostream>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str,int length) {
        if(str ==NULL && length <= 0)
              return ;
        int StrLength = 0;
        int SpaceNum = 0;
        int i = 0;
        while(str[i] != '\0')
        {
            ++ StrLength;
            if(str[i] == ' ')
                ++SpaceNum;
            ++i;
        }
        
        int NewStrLength = StrLength + SpaceNum * 2;
        if(NewStrLength > length)
            return;
        
        int indexOfOriginal = StrLength;
        int indexOfNew = NewStrLength;  
        
        while(indexOfOriginal >= 0 && indexOfNew > indexOfOriginal)
        {
            if(str[indexOfOriginal] == ' ')
            {
              str[indexOfNew --] = '0';
              str[indexOfNew --] = '2';
              str[indexOfNew --] = '%';
                
            }                
            else
            {
                str[indexOfNew --] = str[indexOfOriginal];
               
            }
            
            -- indexOfOriginal;
            
        }

	}
};