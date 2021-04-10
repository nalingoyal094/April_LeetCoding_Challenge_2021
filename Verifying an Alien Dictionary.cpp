class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        map<char,int >mp;
        
        int flag=0;
        for (int i=0;i<order.size();i++)
        {
            mp[order[i]]=i;
        }
        
        for (int i=0;i<words.size()-1;i++)
        {
            
            int l=min(words[i].size(),words[i+1].size());
        
         if (l==words[i+1].size() && l!=words[i].size())
            {
                      
                for (int k=0;k<l;k++)
                {
                    if (words[i][k]!=words[i+1][k])
                    {
                        break;
                    }
                    cout<<k<<endl;
                    if (k==l-1)
                        return false;
                }
             
            }

            for(int k=0;k<l;k++)
            {
                if(mp[words[i][k]]<mp[words[i+1][k]])
                {
                    break;
           
                }
                if(mp[words[i][k]]>mp[words[i+1][k]])
                {
                    return false;
                }
            }
           
            
        }
        
        
        return true;
        
    }
};
