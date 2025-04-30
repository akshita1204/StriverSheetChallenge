
/*
class Solution {
public:
void reversepart(int i,int j,vector<int>& nums)
{
        int n=nums.size();
        while(i<=j)
        {
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            i++;
            j--;
        }
}
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) k=k%n;
        reversepart(0,n-k-1,nums);
        reversepart(n-k,n-1,nums);
        reversepart(0,n-1,nums);
        return ;
        
    }
};

*/

/*
Time Complexity: O(N)
Space Complexity: O(1)
*/

//https://leetcode.com/problems/rotate-array/description/