/*
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=(n*(n+1))/2;
        int s=0;
        for(int ele:nums) s+=ele;
        return sum-s;
    }
};
*/

/*
Time Complexity: O(n)
Space Complexity: O(1)
*/