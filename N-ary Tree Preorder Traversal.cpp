//RECURSIVE SOLUTION

class Solution {
public:
    vector<int >ans;
    
    
    void pre(Node*root)
    {
        if (root==NULL)
            return;
        
        ans.push_back(root->val);
        
        for (auto v: root->children)
        
        pre(v);
        
        
    }
    
    
    vector<int> preorder(Node* root) {
        
       pre(root);
        return ans;
        
    }
};

//T.C = O(N)
//S.C = O(height of the tree) because of the maximum number of function calls in a recursive stack




//ITERATIVE


class Solution {
public:
    vector<int >ans;
    
    void pre(Node*root)
    {
        stack<Node*>s;
        s.push(root);
        
        while(s.empty()==false)
        {
            Node*t=s.top();
            s.pop();
            ans.push_back(t->val);
            for (int i=(t->children).size()-1;i>=0;i--)
            {
                s.push((t->children)[i]);
            }
        }
    }
    
    vector<int> preorder(Node* root) {
        if (root!=NULL)
        pre(root);
        return ans;
        
        
    }
};

//T.C = O(N)
//S.C = O(N)




