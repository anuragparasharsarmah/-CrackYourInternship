class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Sort O(nlogn)
        //Bucket Sort O(2n)
        //Dutch National FLag Algorithm O(n)

        // 0 0 0 0 0       1 1 1 1 1       101021010       2 2 2 2 2
        // |       |       |       |       |       |       |       |
        // 0     low-1    low    mid-1    mid     high   high+1    n

        int low = 0, mid = 0, high = nums.size()-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                low++; mid++;
            }

            else if(nums[mid] == 1){
                mid++;
            }

            else if(nums[mid] == 2){
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};
