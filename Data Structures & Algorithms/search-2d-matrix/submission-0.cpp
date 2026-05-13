class Solution {
public:
    static int search(vector<int>& nums, int target) 
    {
        int low = 0;
        int high = nums.size() - 1;
        while(low <= high)
        {
            int mid = low + ((high - low) / 2);
            if(target == nums[mid])
                return(mid);
            else if(target < nums[mid])
                high = mid - 1;
            else if(target > nums[mid])
                low = mid + 1;
        }
        return(-1);
    }
    static bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int row_low = 0;
        int row_high = matrix.size() - 1;
        if (row_high == -1)
            return false;
        while (row_low < row_high)
        {
            int row_mid = row_low + ((row_high - row_low) / 2);
            if(matrix[row_mid][matrix[row_mid].size() - 1] == target)
                return true;
            if(matrix[row_mid][matrix[row_mid].size() - 1] < target)
                row_low = row_mid + 1;
            else if(matrix[row_mid][matrix[row_mid].size() - 1] > target)
                row_high = row_mid;
        }
        if(search(matrix[row_low], target) == -1)
            return false;
        return true;
    }
};