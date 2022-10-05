class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0,total_sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total_sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            cout<<sum<<" "<<total_sum<<"\n";
            total_sum-=nums[i];
            if(sum==total_sum){
                return i;
            }
           sum+=nums[i];
        }
        return -1;
    }
};