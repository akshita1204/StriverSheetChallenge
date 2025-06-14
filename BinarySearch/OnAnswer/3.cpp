//https://leetcode.com/problems/koko-eating-bananas/description/
/*class Solution {
public:
int fmax(vector<int>&piles)
{
    int ans=INT_MIN;
    for(int i=0;i<piles.size();i++)
    {
        ans=max(ans,piles[i]);
    }
    return ans;
}
long long int calth(vector<int>& piles, int ho)
{
    long long int th=0;
    for(int i=0;i<piles.size();i++)
    {
        th+=ceil((double)(piles[i])/(double)(ho));
    }
    return th;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=-1;
       int low=1;
       int high=fmax(piles);
       while(low<=high)
       {
        int mid=(low+high)/2;
        long long int th=calth(piles,mid);
        if(th<=h) 
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       } 
       return ans;
    }
};*/