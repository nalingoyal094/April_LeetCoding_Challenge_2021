class Solution {
public:
    
    int max=INT_MIN;
    vector<vector<int>>v;
    
    int ans(vector<vector<int>>& triangle,int row,int col,int r)
    {
        if (row==r)
            return 0;
        if (v[row][col]!=20000000)
        {
            return v[row][col];
        }
        
            
        
        if (ans(triangle,row+1,col,r)<=ans(triangle,row+1,col+1,r))
          v[row][col]= triangle[row][col]+ans(triangle,row+1,col,r);
        else
           v[row][col]=triangle[row][col]+ans(triangle,row+1,col+1,r);
        
        return v[row][col];
    }
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        v=triangle;
        for (int i=0;i<triangle.size();i++)
        {
            for (int j=0;j<=i;j++)
            {
                v[i][j]=20000000;
            }
        }
        
        if (triangle.size()==0)
            return 0;
        
        int row=0;
        int col=0;
        int r=triangle.size();
        
        
        //return ans(triangle,row+1,col,r,sol);
        //cout<<ans(triangle,row+1,col,r)<<endl;
        //cout<<ans(triangle,row+1,col+1,r)<<endl;
        
        //v[0][0]= max(triangle[0][0]+ans(triangle,row+1,col,r),triangle[0][0]+ans(triangle,row+1,col+1,r));
        
        if (ans(triangle,row+1,col,r)<=ans(triangle,row+1,col+1,r))
          v[0][0]= triangle[0][0]+ans(triangle,row+1,col,r);
        else
            v[0][0]=triangle[0][0]+ans(triangle,row+1,col+1,r);
        return v[0][0];
        
    }
};

// T.C = O(n^2)
// S.C = O(n^2)




// https://www.youtube.com/watch?v=kXx2eB2B2kQ


class Solution {
public:
    
    
    
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[triangle[triangle.size()-1].size()];
        
        for (int i=0;i<triangle[triangle.size()-1].size();i++)
          {
              dp[i]=triangle[triangle.size()-1][i];
                                    
          }
        
        
        for (int i=triangle.size()-2;i>=0;i--)
        {
            for (int j=0;j<triangle[i].size();j++)
            {
                dp[j]=triangle[i][j]+min(dp[j],dp[j+1]);
            }
        }
        
        return dp[0];
        
    }
};

// T.C= O(n^2)
// S.C=O(n)
