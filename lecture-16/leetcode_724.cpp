class solution
{
    public:
    int pivotIndex(vector<int>& nums)
    {
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            total+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++)
        {
            int rigthsum=total-leftsum-nums[i];
        }
    }
};