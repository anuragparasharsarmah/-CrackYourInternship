class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Bucket Sort with O(n) time complexity
        int z = 0, o = 0, t = 0;

        for(auto it: nums){
            if(it == 0) z++;
            if(it == 1) o++;
            if(it == 2) t++;
        }

        int i = -1;

        while(1){
            if(z == 0 && o == 0 && t == 0) break;
            i++;

            if(z != 0){
                nums[i] = 0;
                z--;
                continue;
            }

            if(z == 0 && o != 0){
                nums[i] = 1;
                o--;
                continue;
            }

            if(z == 0 && o == 0 && t != 0){
                nums[i] = 2;
                t--;
                continue;
            }
        }
    }
};
