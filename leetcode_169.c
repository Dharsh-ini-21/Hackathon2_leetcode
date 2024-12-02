int majorityElement(int* nums, int numsSize) {
     int sol = 0, cnt = 0;
        for(int i = 0; i < numsSize; i++ ) {
            if(cnt == 0){
                sol = nums[i];
                cnt = 1;
            }
            else if(sol == nums[i])
            {
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return sol;
    
}
