int findMaxConsecutiveOnes(int* nums, int numsSize){
    
    int found = 0;
    int max = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 0) {
            found = 0;
        }else {
            found++;
            
            if (found > max) {
                max = found;
            }      
        }
    }
    return max;
}
