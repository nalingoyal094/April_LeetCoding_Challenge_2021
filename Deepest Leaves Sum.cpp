class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int size=1;
        int sum=0;
        while(!q.empty())
        {
            sum=0;
            while(size--)
            { 
                
                TreeNode* front= q.front();
            q.pop();
                sum+=front->val;
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
            }
            size=q.size();
        }
        return sum;
    }
};
