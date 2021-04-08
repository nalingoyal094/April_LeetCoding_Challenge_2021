class Solution {
public:
    
    map<char,string>mp;
    
    
    
    vector<string>ans;
    
    void backtrack(string &s1,int i,string digits)
    {
        if (i==digits.size())
        {
            ans.push_back(s1);
            return;
        }
        
         for (auto k: mp[digits[i]])
            {
                s1+=k;
                backtrack(s1,i+1,digits);
                s1.pop_back();
            }
        
        
    }
    
    vector<string> letterCombinations(string digits) {
        mp['2']="abc";
    mp['3']="def";
    mp['4']="ghi";
    mp['5']="jkl";
    mp['6']="mno";
    mp['7']="pqrs";
    mp['8']="tuv";
    mp['9']="wxyz";
       
        if (digits.size()==0)
            return ans;
        string s="";
        int i=0;
            for (auto k: mp[digits[i]])
            {
                s+=k;
                backtrack(s,i+1,digits);
                s.pop_back();
            }
            
            
        
            
     
        return ans;
    }
};
