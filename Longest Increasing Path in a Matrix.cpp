class Solution {
public:
    
     vector<pair<int,int >>dir;
    int dfs(vector<vector<int>>& matrix,int i,int j,vector<vector<int>>& ans)
    {
        if (ans[i][j]>0)
        {
            return ans[i][j];
        }
        
        int m=0;
        int dis=0;
        
        for (auto v:dir)
        {
            
            if ( i+v.first >=0 and i+v.first <matrix.size() and j+v.second >=0 and j+v.second <matrix[0].size()  and matrix[i+v.first][j+v.second]>matrix[i][j])
            {
                dis=dfs(matrix,i+v.first,j+v.second,ans);
                m=max(m,dis);
            }
        }
        
       
        
        ans[i][j]=m+1;
        
        return m+1;
        
        
        
        
        
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        if (matrix.size()==0)
        {
            return 0;
        }
        
        vector<vector<int>>ans=matrix;
       
    dir.push_back({1,0});
    dir.push_back({-1,0});
    dir.push_back({0,1});
    dir.push_back({0,-1});
    
        
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[0].size();j++)
            {
                ans[i][j]=0;
            }
        }
        
        int sol=0;
        
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[0].size();j++)
            {
                int dis;
                
                  dis=dfs(matrix,i,j,ans);
                  ans[i][j]=dis;
                sol=max(sol,dis);
                
            }
        }
        
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[0].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        
        return sol;
    }
};
