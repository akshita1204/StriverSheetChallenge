/*class Solution {
public:

int fmax(vector<int>& w)
{
    int ans=INT_MIN;
    for(int i=0;i<w.size();i++)
    {
        ans=max(ans,w[i]);
    }
return ans;
}

int sum(vector<int>&w)
{   int s=0;
    for(int i=0;i<w.size();i++)
    {
        s+=w[i];
    }
return s;
}

bool f(vector<int>& w, int d,int cap)
{
    int day=1;
    int load=0;
for(int i=0;i<w.size();i++)
{
    if(w[i]+load>cap) 
    {day++;
    load=w[i];
    }
    else load+=w[i];
}
if(day<=d) return true;
else return false;
}
  
    int shipWithinDays(vector<int>& weights, int days) {
       int n=weights.size();
       int low=fmax(weights);
       int high=sum(weights); 
       int ans;
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(f(weights,days,mid)==true)
        {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       }
       return ans;
    }
};*/