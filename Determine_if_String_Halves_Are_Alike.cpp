class Solution {
public:
    
    bool isvowel(char c)
    {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return true;
        }
        return false;
    }
    
    bool halvesAreAlike(string s) {
        
        int size=0;
        int c1=0,c2=0;
        for (int i=0;i<s.size()/2;i++)
        {
            if (isvowel(s[i])==true)
                c1++;
        }
        for (int i=s.size()/2;i<s.size();i++)
        {
            if (isvowel(s[i])==true)
                c2++;
        }
        
        return c1==c2;
        
    }
};
