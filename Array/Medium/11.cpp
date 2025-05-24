//https://leetcode.com/problems/set-matrix-zeroes/description/
/*
class Solution {
public:
// USING OPTIMAL APPROACH
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        bool firstrowzero=false, firstcolzero=false;
        //check if the first row containes any zero
        for(int j=0;j<m;j++)
        {
           if(matrix[0][j]==0) firstrowzero=true;
        }
        //check if the first col contains any zero
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==0) firstcolzero=true;
        }
        //use the first row and first col as the markers
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[0][j]=0; //mark row as zero
                    matrix[i][0]=0; //mark col as 0
                }
            }
        }
        //now update the other cols and rows as zero
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[0][j]==0 or matrix[i][0]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        //update if req based on the first zero
        if(firstrowzero)
        {
            for(int j=0;j<m;j++)
            {
                matrix[0][j]=0;
            }
        }
        //update if re base on the first col
        if(firstcolzero)
        {
        for(int i=0;i<n;i++)
          {
            matrix[i][0]=0;           
          }
        }
    }
};

*/