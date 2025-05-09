
//https://leetcode.com/problems/pascals-triangle/description/

/*
class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            vector<int>v(i+1);
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i) v[j]=1;
                else 
                {
                v[j]=ans[i-1][j-1]+ans[i-1][j];
                }
            }
            ans[i]=v;
        }
          return ans;
    }
      
        
    
};
*/