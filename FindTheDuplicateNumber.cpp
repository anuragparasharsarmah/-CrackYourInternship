class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // 0 1 2 3 4
        // 1 3 4 2 2

        // 1 -> 3 -> 2 <-> 4

        //fast = 2*slow
        //After fast and slow intersection point of intersection, move both slows. New intersetion point is the answer.

        int slow1 = nums[0], slow2 = nums[0], fast = nums[0];

        while(1){
            fast = nums[nums[fast]];
            slow1 = nums[slow1];

            if(fast == slow1) break;
        }

        while(1){
            if(slow1 == slow2) return slow1;

            slow1 = nums[slow1];
            slow2 = nums[slow2];
        }

        return 0;
    }
};
