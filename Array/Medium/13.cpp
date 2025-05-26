//https://leetcode.com/problems/spiral-matrix/
/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
          int n=matrix.size();
          int m=matrix[0].size();
        vector<int>ans;
        int minr=0;
        int maxr=n-1;
        int minc=0;
        int maxc=m-1;
        int c=0;
        int t=m*n;
        while(minr<=maxr && minc<=maxc)
        {
            for(int j=minc;j<=maxc && c<t;j++)
            {
              ans.push_back(matrix[minr][j]);
              c++;
            }
            minr++;

            for(int i=minr;i<=maxr&& c<t;i++)
            {
                ans.push_back(matrix[i][maxc]);
                c++;
            }
            maxc--;

            for(int j=maxc;j>=minc && c<t;j--)
            {
               ans.push_back(matrix[maxr][j]);
                c++;
            }
            maxr--;

            for(int i=maxr;i>=minr && c<t;i--)
            {
               ans.push_back(matrix[i][minc]);
                c++;
            }
            minc++;
        }
        return ans;
    }
};
*/