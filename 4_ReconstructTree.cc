/*输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，则重建二叉树并返回。*/

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    struct TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> in){
        if(pre.empty() || in.empty())  
            return NULL;
        else
        {
        int Length = pre.size();
        int rootValue = pre[0];
        TreeNode *root = new TreeNode(rootValue);
        
        if(pre.begin() == pre.end())
        {
            if(in.begin() == in.end() && pre[0] == in[0])
                return root;
            else return NULL;      
              
         }
        
        //int *StartIn = in.begin();
        //int *StartPre = pre.begin();
        //int *EndIn = in.end();
        //int *EndPre = pre.end();
                
        int rootInorder = 0;
        
        while(rootInorder <= Length && in[rootInorder] != rootValue)
        {
            ++rootInorder;
        }
        
        if(rootInorder == Length && in[rootInorder] != rootValue) 
        {
            return NULL;
        }
        
        //int *leftEndPre = StartPre + leftLength;
        
        vector<int> leftPre, rightPre, leftIn, rightIn;
        
        for(int i = 1; i <= rootInorder; ++i)
        {
            leftPre.push_back(pre[i]);
            leftIn.push_back(in[i-1]);
        }
        
        for(int j = rootInorder + 1; j < Length; ++j)
        {
            rightPre.push_back(pre[j]);
            rightIn.push_back(in[j]);
        }
        
        
        if(rootInorder > 0)
        {
            root->left = reConstructBinaryTree(leftPre, leftIn);
        }
            
        if(rootInorder < Length)
        {
            root->right = reConstructBinaryTree(rightPre, rightIn);
        }
            
        return root;
    }
   }
           
};