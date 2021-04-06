class Solution {
    
   public: 
    int findMaxForm(vector<string>& strs, int m, int n) {
        int dp[105][105]={0};
            //dp= new int[m+1][n+1];
        
        for(string s:strs){
            int *p;
            p= count(s);
          //  cout<<p[0]<<" "<<p[1]<<endl;
            //zero m-count[0]  ---- 0
            //one n - count[1] ---- 0
            for(int zero=m;zero>=p[0];zero--){
                for(int one=n; one>=p[1]; one--){
                    dp[zero][one] = max(dp[zero-p[0]][one-p[1]] +1 , dp[zero][one]);
                }
            }
        }
        
        
        return dp[m][n];
    }
    
    int* count(string s){
         int cs[2]={0};
        for(char c: s){
            cs[c-'0']++;
        }
        cout<<cs[0]<<" "<<cs[1]<<endl;
        return cs;
    }
};