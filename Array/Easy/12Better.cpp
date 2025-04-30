/*

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int ele:nums) mp[ele]++;
        for(auto ele:mp)
        {
            if(ele.second==1) return ele.first;
        }
        return -1;
    }
};
*/



/*
Time=>  O(N*logM) + O(M), where M = size of the map i.e. M = (N/2)+1. N = size of the array.
space=>O(1)
*/